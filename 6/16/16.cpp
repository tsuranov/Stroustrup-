#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;

int my_atoi(const char* str)
{
	int result = 0;
	int size = strlen(str);
	double base = 10;

	int i = 0;
	if(str[0] == '0')
	{
		base = 8;
		i = 1;
		if(str[1] == 'x')
		{
			base = 16;
			i = 2;		
		}
	}
	for(double p = size- 1 - i; i < size; i++, p--)
	{
		switch(str[i])
		{
			case '1':
				result += (1 * pow(base, p));
				break;
			case '2':
				result += (2 * pow(base, p));
				break;
			case '3':
				result += (3 * pow(base, p));
				break;
			case '4':
				result += (4 * pow(base, p));
				break;
			case '5':
				result += (5 * pow(base, p));
				break;
			case '6':
				result += (6 * pow(base, p));
				break;
			case '7':
				result += (7 * pow(base, p));
				break;
			case '8':
				result += (8 * pow(base, p));
				break;
			case '9':
				result += (9 * pow(base, p));
				break;
			case '0':
				break;
			case 'a':
				result += (10 * pow(base, p));
				break;
			case 'A':
				result += (10 * pow(base, p));
				break;
			case 'b':
				result += (11 * pow(base, p));
				break;
			case 'B':
				result += (11 * pow(base, p));
				break;
			case 'c':
				result += (12 * pow(base, p));
				break;
			case 'C':
				result += (12 * pow(base, p));
				break;
			case 'd':
				result += (13 * pow(base, p));
				break;
			case 'D':
				result += (13 * pow(base, p));
				break;
			case 'e':
				result += (14 * pow(base, p));
				break;
			case 'E':
				result += (14 * pow(base, p));
				break;
			case 'f':
				result += (15 * pow(base, p));
				break;
			case 'F':
				result += (15 * pow(base, p));
				break;
			default:
				break;
		}
	}
	return result;
}

int main(void)
{
	cout << my_atoi("0xf") << endl;
	return 0;
}
