#include <string>
using namespace std;

struct Date;
int day (Date*);

double sqrt (double a) {return a;}


template<class T>T abs(T);

int main (void)
{
	extern char ch;
	extern string s;
	extern int count;
	extern const double pi;
	extern const char* name;
	extern const char* season[];
	
	struct User {int a, b, c;};
	
	// enum Beer;
	// namespace NS;

	return 1;
}
