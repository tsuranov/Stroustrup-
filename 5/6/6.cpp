void f (char a) {}

void g (char& a) {}

void h (const char& a){}

int main (void)
{
	char a = 'a';
	unsigned char ua = 'a';
	signed char sa = 'a';
	f('a');
	f(49);
	//f(3300);
	f(a);
	f(ua);
	f(sa);
	
	//g('a');
	//g(49);
	//g(3300);
	g(a);
	//g(ua);
	//g(sa);
	
	h('a');
	h(49);
	//h(3300);
	h(a);
	h(ua);
	h(sa);

	return 1;
}
