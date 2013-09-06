#include <iostream>
using namespace std;

struct err
{
	int id;
	err() {id++;};
};

void b ()
{
	cout << "b start" << endl;
	throw err();
	cout << "b finish" << endl;
}

void a ()
{
	cout << "a start" << endl;
	b();
	cout << "a finish" << endl;
}

int main(int argc, char* argv[])
{
	cout << "main start" << endl;
	try
	{
		a();
	}
	catch(err)
	{
		cout << "catch" << endl;
	}
	cout << "main finish" << endl;
	return 0;
}
