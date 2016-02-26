#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <iterator> 
#include "boost/filesystem/operations.hpp"
#include "boost/filesystem/path.hpp"
#include <iostream>
#include <fstream>

#include "utils.hpp"

#define datapath_ "/home/kanit/convnet/data/256_ObjectCategories"
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
			cout <<strs[0] <<"---" << strs[1]<<endl;
			pair<string,double> p(strs[0], atoi(strs[1].c_str()));
			ret.push_back(p);
		}
		dfile.close();
	}
	return ret;
}

int main()
{
	string datapath = datapath_;	
	vector<string> foldername = listFolder(datapath);

	string dictionarypath = dictionarypath_;
	createDictionary(dictionarypath,foldername);

	vector< pair<string,int> > dict = readDictionary(dictionarypath);
	cout << dict[0].first<<"    " << dict[0].second <<endl;


	
	// new Datum(datapath,0);
	return 0;
}