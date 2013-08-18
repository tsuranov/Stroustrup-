#include <iostream>
using namespace std;

int main(void)
{
	cout << " & " << endl;
	cout << hex << (0&0) << endl;
	cout << hex << (0&1) << endl;
	cout << hex << (1&0) << endl;
	cout << hex << (1&1) << endl;

	cout << " | " << endl;
	cout << hex << (0|0) << endl;
	cout << hex << (0|1) << endl;
	cout << hex << (1|0) << endl;
	cout << hex << (1|1) << endl;

	cout << " ^ " << endl;
	cout << hex << (0^0) << endl;
	cout << hex << (0^1) << endl;
	cout << hex << (1^0) << endl;
	cout << hex << (1^1) << endl;


	return 0;
}
