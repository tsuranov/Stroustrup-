#include <iostream>
#include <cstring>
using namespace std;

void rev(char* str)
{
	int size = strlen(str)-1;
	char tmp;
	for(int i = 0; i <= size/2; i++)
	{
		tmp = str[i];
		str[i] = str[size - i];
		str[size - i] = tmp;
	}
}

int main(void)
{
	char str[] = "Hello World!!";
	cout << str << endl;
	rev(str);
	cout << str << endl;
	return 0;
}
