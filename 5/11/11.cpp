#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main (void)
{	
	string s;
	vector<string> vs;
	do{
		getline (cin, s);
		vs.push_back(s);	
	}
	while (s != "quit");	
	cout << "#####################################" << endl;
	for (int i = 0; i < vs.size(); i++)
		cout << vs[i] << endl;
	cout << "#####################################" << endl;
	
	sort (vs.begin(), vs.end());
	cout << vs[0] << endl;	
	for (int i = 1; i < vs.size(); i++)
	{
		bool flag = true;
		for (int j = 0; j < i; j++)
		{
			if (vs[j] == vs[i])
			{
				flag = false;
				break;
			}
			
		}
		if(flag != false)
			cout << vs[i] << endl;
	}

	return 1;
}
