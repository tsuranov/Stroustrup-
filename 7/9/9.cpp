#include <iostream>
#include <string>
using namespace std;
int main (int argc, char* argv[])
{
	string key = "123";
	string s;
	do{
		getline(cin, s);
		if(s.empty())
			return 0;
		for(int i = 0; i < s.size(); i++)
			s[i] = s[i]^key[i%key.size()];
		cout << s << endl;
		cout << "##############" << endl;
		for(int i = 0; i < s.size(); i++)
			s[i] = s[i]^key[i%key.size()];
		cout << s << endl;
	}
	while(!s.empty());
	return 0;
}
