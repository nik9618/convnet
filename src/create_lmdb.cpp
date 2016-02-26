#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <iterator> 
#include "boost/filesystem/operations.hpp"
#include "boost/filesystem/path.hpp"
#include <iostream>
#include <fstream>
#include <algorithm>

#include "utils.hpp"
#include "Datum.hpp"

#define datapath_ "/home/kanit/convnet/data/256_ObjectCategories/"
#define dictionarypath_ "/home/kanit/convnet/res/dictionary"

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
	return foldername;
}

void createDictionary(string dictionarypath, vector<string> foldername)
{
	ofstream dictFile;
	dictFile.open(dictionarypath.c_str());
	for(int i = 0; i< foldername.size(); i++)
	{
		dictFile << foldername[i] <<"\t"<< i <<"\n";
		// cout << foldername[i] <<endl;
	}
	dictFile.close();
}

vector< pair<string,int> > readDictionary(string dictionarypath)
{
	string line;
	vector< pair<string,int> > ret(0);
	ifstream dfile (dictionarypath.c_str());
	if (dfile.is_open())
	{
		while ( getline (dfile,line) )
		{
			vector<string> strs = split(line, '\t');
			pair<string,double> p(strs[0], atoi(strs[1].c_str()));
			ret.push_back(p);
		}
		dfile.close();
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


	string dictionarypath = dictionarypath_;
	createDictionary(dictionarypath,foldername);


	vector< pair<string,int> > dict = readDictionary(dictionarypath);


	vector< pair<string,int> > pathAndLabel(0);
	for(int i=0; i<dict.size(); i++)
	{
		string path = datapath + dict[0].first+"/";
		vector<string> files = listFilename(path);
		for(int j=0; j<files.size(); j++)
		{
			pathAndLabel.push_back( pair<string,int>(path+files[j],dict[i].second) );
			// cout<< path + files[j] <<"  " << dict[i].second<<endl;
		}
	}
	
	
	random_shuffle(pathAndLabel.begin(), pathAndLabel.end());

	//create datum, just try
	new Datum(pathAndLabel[0].first,pathAndLabel[0].second); // string and int = path and label

	//create lmdb 


	//push and commit to lmdb

	// new Datum(datapath,0);
	return 0;
}















