#include <stdio.h>
#include <string>
#include <lmdb.h>
#include <iostream>

class Data
{
	public:
		Data(std::string dbpath);
		int open();
		void createDB(std::string* str, int* labels);

	private:
};
