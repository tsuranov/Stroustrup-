#include <iostream>
#include <cstring>
using namespace std;

void my_itoa(int i, char* a)
{
	int j = 8;
	char tmp[10];
	for(; i != 0; j--)
	{
		int modulo = i % 10;
		i /= 10;
		switch(modulo)
		{
			case 1:
				tmp[j] = '1';
				break;
			case 2:
				tmp[j] = '2';
				break;
			case 3:
				tmp[j] = '3';
				break;
			case 4:
				tmp[j] = '4';
				break;
			case 5:
				tmp[j] = '5';
				break;
			case 6:
				tmp[j] = '6';
				break;
			case 7:
				tmp[j] = '7';
				break;
			case 8:
				tmp[j] = '8';
				break;
			case 9:
				tmp[j] = '9';
				break;
			case 0:
				tmp[j] = '0';
				break;
			default:
				break;
		}
		strcpy(a, &tmp[j]);
	}	
}

int main(void)
{
	char a[256];
	my_itoa(123, a);
	cout << a << endl;
	return 0;
}
