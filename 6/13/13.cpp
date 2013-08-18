#include <iostream>
#include <cstring>

using namespace std;

char* my_cat (const char* str1, const char* str2)
{
	char* united_str = new char[strlen(str1) + strlen(str2) + 1];
	strcpy(united_str, str1);
	strcpy(&united_str[strlen(str1)], str2);
	return united_str;
}
int main (void)
{
	char str1[] = "Hello ";
	char str2[] = "World!";
	cout << my_cat(str1, str2) << endl;
	return 0;
}
