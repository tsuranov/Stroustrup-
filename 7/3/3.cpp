#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	cout << "argc = " << argc << endl;
	for (int i = 1; i < argc; i++)
	{
		cout << "argv = " << argv[i] << endl;
	}
	return 0;
}
