#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <iterator> 
#include "Datum.hpp"
#include "boost/filesystem/operations.hpp"
#include "boost/filesystem/path.hpp"
// #include "boost/progress.hpp"

using namespace std;

#define datapath_ "/home/kanit/convnet/data/256_ObjectCategories"
int main()
{
	namespace fs = boost::filesystem;
	fs::directory_iterator end_iter;
	string datapath = datapath_;
	vector<string> foldername();

	for( fs::directory_iterator dir_iter(datapath.c_str()) ; dir_iter != end_iter ; ++dir_iter)
    {
    	fs::directory_entry& entry = *dir_iter;
    	ostringstream oss;
		oss << entry;
		string path = oss.str();
		path = path.substr(path.find_last_of("/")+1,path.length());
		foldername.push_back(path);
    }
    
	new Datum(datapath,0);
	return 0;
}
