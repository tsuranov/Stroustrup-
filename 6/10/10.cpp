#include <iostream>
#include <string.h>
using namespace std;

int my_strlen (const char* str)
{
	int len = 0;
	while (str[len] != 0)
		len++;
	return len;
}

char* my_strcpy (const char* str)
{
	int len = my_strlen(str) + 1;
	char* out = new char[len];
	memcpy(out, str, len); 
}

bool my_strcmp (const char* a, const char* b)
{
	int i = 0;
	while (( a[i] == b[i] ) && (a[i] != 0 ))
		i++;
	cout << i << endl;
	if ((a[i] == 0 ) && (b[i] == 0 ))
		return true;
	return false;
}
int main (void)
{
	char str[] = "123";
	char* p = my_strcpy(str);
	//cout << my_strlen(str) << endl;
	//cout << p << endl;
	cout << my_strcmp("123", "1234") << endl;	
	return 0;
}
