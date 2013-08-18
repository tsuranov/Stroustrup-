#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main (int argc, char* argv[])
{
	ifstream fs;
	
	for(int i = 1; i < argc; i++)
	{
		cout << argv[i] << endl;
		
		fs.open(argv[i], fstream::in);
		
		fs.seekg (0, fs.end);
    	int length = fs.tellg();
   		fs.seekg (0, fs.beg);
   		
   		char s[length];
	
		fs.read(s, length);
		cout.write(s, length);
		fs.close();
	}
	return 0;
}
