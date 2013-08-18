#include <iostream>
using namespace std;
int main (void)
{

	for(int i = char ('0'); i < char ('z'); i++)
		cout << hex << i << "\t" << char(i) << endl;
	
	return 1;
}
