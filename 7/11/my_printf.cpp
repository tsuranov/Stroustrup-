#include <cstdarg>
#include <iostream>
#include <string>
using namespace std;
// %d %c %s
int my_printf(string s, ...)
{
	va_list vl;
	va_start(vl, s);

	for (int i=0; i < s.size(); i++)
	{
		if(s.compare(i, 1,"%") != 0)
		{
			cout << s[i];
		}
		else
		{
			i++;
			if( i >= s.size())
				return 1;
			int d;
			char c;
			string str;
			switch(s[i])
			{
				case 'd':
					cout << va_arg(vl, int);
					 d;
					break;
				case 'c':
					cout << va_arg(vl, char);
					break;
				case 's':
					cout << va_arg(vl, char*);
					break;
			}
		}
	}
	va_end(vl);
	printf ("\n");
	return 0;
}
int main(int argc, char* argv[])
{
	my_printf("asd%d %c %s", 123, 'S', "string");
	return 0;
}