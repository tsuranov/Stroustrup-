#include <string>
using namespace std;
int main (void)
{

	char* pc;
	string* s;
	char** cc;
	const int a = 6;
	const int* b;
	int f = 5;
	int *const d = &f;

	char c[] = "Hello world!";
	pc = c;

	int m[10] = {0,1,2,3,4};
	
	string str = "Hello";
	s = &str;
	cc = &pc;

	b = &a;

	return 1;
}
