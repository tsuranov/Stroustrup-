
#include <iostream>
#include <string>
using namespace std;

void f (string* s, int n)
{
	for(int i = 0; i < n; i++)
		cout << s[i] << endl;
}
int main (void)
{
	string s[] = {"one", "two two", "three three three"};
	f(s, 3);
	return 1;
}
