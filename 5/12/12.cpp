#include <iostream>
#include <map>
#include <string>
using namespace std;
int main (void)
{
	map<string, int> ab;
	string s;	
	getline(cin , s);
	cout << "size line:" << s.size() << endl;

	for(int i = 0; i < s.size()-1; i++)
	{
		string substr = s.substr(i, 2);
		ab[substr]++;
	}

	for (map<string,int>::iterator it = ab.begin(); it != ab.end(); it++)
    		cout << it->first << " => " << it->second << '\n';

	return 1;
}
