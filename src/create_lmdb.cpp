#include <stdio.h>
#include <string>
#include <vector>
#include <iterator> 
#include "boost/filesystem/operations.hpp"
#include "boost/filesystem/path.hpp"
#include <iostream>
#include <fstream>
#include <algorithm>

#include "proto/data.pb.h"

#include "utils.hpp"
#include "Db.hpp"

#define datapath_ "/home/kanit/convnet/data/256_ObjectCategories/"
#define categorypath_ "/home/kanit/convnet/proto/categoryList.proto"
#define dbpath_ "/home/kanit/convnet/data/lmdb"

using namespace std;

vector<string> listFolder(string datapath)
{
	namespace fs = boost::filesystem;
	fs::directory_iterator end_iter;
	vector<string> foldername(0);
	for( fs::directory_iterator dir_iter(datapath.c_str()) ; dir_iter != end_iter ; ++dir_iter)
	{
		fs::directory_entry& entry = *dir_iter;
		ostringstream oss;
		oss << entry;
		string path = oss.str();
		path = path.substr(path.find_last_of("/")+1, path.length() - path.find_last_of("/")-2);
		foldername.push_back(path);
	}
	sort (foldername.begin(), foldername.end());
	return foldername;
}

void createCategoryList(string categorypath, vector<string> foldername)
{
	Data::categoryList cateList;
	for(int i = 0; i< foldername.size(); i++)
	{
		Data::category* cate = cateList.add_category();
		cate->set_name(foldername[i]);
		cate->set_id(i);
	}
	// cout << cateList.SerializeAsString()<<endl;
	fstream output(categorypath.c_str(), ios::out | ios::trunc | ios::binary);
	if (!cateList.SerializeToOstream(&output)) {
		cerr << "Failed to write categorylist" << endl;
	}
}

vector< pair<string,int> > readCategoryList(string categorypath)
{
	vector< pair<string,int> > ret(0);
	Data::categoryList cateList;
	fstream input(categorypath.c_str(), ios::in | ios::binary);
	
	if (!cateList.ParseFromIstream(&input)) {
		cout << "Failed to parse cate." << endl;
		return ret;
	}

	for(int i=0; i<cateList.category_size(); i++)
	{
		Data::category* cate = cateList.mutable_category(i);	
		pair<string,double> p(cate->name(), cate->id());
		ret.push_back(p);
	}
	return ret;
}

vector<string> listFilename(string path) 
{
	namespace fs = boost::filesystem;
	fs::directory_iterator end_iter;
	vector<string> listname(0);
	for( fs::directory_iterator dir_iter(path.c_str()) ; dir_iter != end_iter ; ++dir_iter)
	{
		fs::directory_entry& entry = *dir_iter;
		ostringstream oss;
		oss << entry;
		path = oss.str();
		path = path.substr(path.find_last_of("/")+1, path.length() - path.find_last_of("/")-2);
		listname.push_back(path);
	}
	return listname;
}

int main()
{	
	srand ( unsigned ( time(0) ) );
	
	string datapath = datapath_;
	vector<string> foldername = listFolder(datapath);


	string categorypath = categorypath_;
	createCategoryList(categorypath,foldername);

	vector< pair<string,int> > categories = readCategoryList(categorypath);


	vector< pair<string,int> > pathAndLabel(0);
	for(int i=0; i<categories.size(); i++)
	{
		string path = datapath + categories[i].first+"/";
		vector<string> files = listFilename(path);
		for(int j=0; j<files.size(); j++)
		{
			pathAndLabel.push_back( pair<string,int>(path+files[j],categories[i].second) );
			// cout<< path + files[j] <<"  " << categories[i].second<<endl;
		}
	}
	
	random_shuffle(pathAndLabel.begin(), pathAndLabel.end());

	//create datum, just try
	// new Datum(pathAndLabel[0].first,pathAndLabel[0].second); // string and int = path and label

	// //create lmdb 
	DB* d = new DB(dbpath_);
	d->drop();
	
	// //push and commit to lmdb
	DB* g = new DB(dbpath_);
	g->createDB(pathAndLabel);

	//read from db
	return 0;
}
