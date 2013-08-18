#include <iostream>
using namespace std;

int fa (int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
	return 1;
}

int fb (int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
	return 1;
}
int main (void)
{
	int a = 5;
	int b = 9;

	fa (&a, &b);
	cout << "a=" << a << " b=" << b << endl;
	fb (a, b);
	cout << "a=" << a << " b=" << b << endl;

	return 1;
}
