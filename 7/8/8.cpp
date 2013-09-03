#include <iostream>
using namespace std;

int transpose(int* A, int m, int n)
{
	int* b = new int [m*n];
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			 b[j*m + i] = A[i*n + j];
		}
	}
	for(int i = 0; i < m*n; i++)
		A[i] =  b[i];
		
	delete b;
	return 0;
}

int main (int argc, char* argv[])
{
	int m = 5;
	int n = 3;
	int A[m][n];
	int* a = A[0];
	int tmp = 0;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			a[i*n+j] = tmp++;
		}
	}
	
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
			cout << '\t'<< a[i*n+j];
		cout << endl;
	}
	cout << endl;
	transpose(a, m, n);
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
			cout << '\t'<< a[i*m+j];
		cout << endl;
	}

	return 0;
}
