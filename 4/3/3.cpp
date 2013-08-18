#include <iostream>
using namespace std;
int main (void)
{
	cout << "bool " << sizeof(bool) << endl;
	cout << "char " << sizeof(char) << endl;
	cout << "int " << sizeof(int) << endl;
	cout << "double " << sizeof(double) << endl << endl;

	cout << "char** " << sizeof(char**) << endl;
	cout << "int* " << sizeof(int*) << endl;
	cout << "double* " << sizeof(double*) << endl;

	enum ABC {A,B,C};
	enum ASD {ASD, ASDF, ASDFG, ASDFG2, AsDFGH, ZXC, ZXCV, ZXCVB, ZXCVBN};
	struct DDD {int a, b, c;};

	cout << "enum ABC " << sizeof(ABC) << endl;
	cout << "enum ASD " << sizeof(ASD) << endl;
	cout << "struct DDD " << sizeof(DDD) << endl;

	return 1;
}
