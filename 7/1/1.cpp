
void f1 (char*, int&);
void (*pf1) (char*, int&);

void f2 ( void (*) (char*, int&) );

typedef void (*PF) (char*, int&);
PF f3 (PF);

int main(void)
{
	return 0;
}
