#include "../holberton.h"

int main(void)
{
	int alen, elen, p, n, z;

	// NULL
	printf("START OF TEST\n");

	//d
	printf("=====================\n");
	printf("*****DECIMAL*****\n");
	printf("=====================\n");
	alen = elen = 0;
	p = -1134001;
	n = 4567;
	z = 0;
	elen = printf("Expected   : %+d\n", p);
	alen = _printf("Actual     : %+d\n", p);
	printf("Expected   : %+p\n", elen);
	_printf("Actual     : %+p\n", alen);
	elen = printf("Expected   : %#+p\n", n);
	alen = _printf("Actual     : %#+p\n", n);
	printf("Expected   : %+p\n", elen);
	_printf("Actual     : %+p\n", alen);
	elen = printf("!Expected   : %p\n", -11232);
	alen = _printf("!Actual     : %p\n", -11232);
	printf("Expected   : %+i\n", elen);
	_printf("Actual     : %+i\n", alen);
	printf("Expected   : %+p\n", INT_MAX);
	_printf("Actual     : %+p\n", INT_MAX);
	printf("Expected   : %+p\n", INT_MIN);
	_printf("Actual     : %+p\n", INT_MIN);


	printf("=====================\n");
	printf("=====================\n");
	elen = printf("Expected   : %+d\n", p);
	alen = _printf("Actual     : %+d\n", p);
	printf("Expected   : %+x\n", elen);
	_printf("Actual     : %+x\n", alen);
	elen = printf("Expected   : %#+x\n", z);
	alen = _printf("Actual     : %#+x\n", z);
	printf("Expected   : %+x\n", elen);
	_printf("Actual     : %+x\n", alen);
	elen = printf("!Expected   : %x\n", -11232);
	alen = _printf("!Actual     : %x\n", -11232);
	printf("Expected   : %+i\n", elen);
	_printf("Actual     : %+i\n", alen);
	printf("Expected   : %+x\n", INT_MAX);
	_printf("Actual     : %+x\n", INT_MAX);
	printf("Expected   : %+x\n", INT_MIN);
	_printf("Actual     : %+x\n", INT_MIN);

	printf("=====================\n");
	printf("=====================\n");
	elen = printf("Expected   : %+d\n", p);
	alen = _printf("Actual     : %+d\n", p);
	printf("Expected   : %+o\n", elen);
	_printf("Actual     : %+o\n", alen);
	elen = printf("Expected   : %#+o\n", z);
	alen = _printf("Actual     : %#+o\n", z);
	printf("Expected   : %+o\n", elen);
	_printf("Actual     : %+o\n", alen);
	elen = printf("!Expected   : %o\n", -11232);
	alen = _printf("!Actual     : %o\n", -11232);
	printf("Expected   : %+i\n", elen);
	_printf("Actual     : %+i\n", alen);
	printf("Expected   : %+o\n", INT_MAX);
	_printf("Actual     : %+o\n", INT_MAX);
	printf("Expected   : %+o\n", INT_MIN);
	_printf("Actual     : %+o\n", INT_MIN);

	/*
	//u
	printf("=====================\n");
	printf("*****UNSIGNED*****\n");
	printf("=====================\n");
	unsigned int uelen = 0;
	unsigned int ualen = 0;
	unsigned int m = 113342421;
	z = 0;
	elen = printf("Expected   : %u\n", p);
	alen = _printf("Actual     : %u\n", p);
	printf("Expected   : %u\n", elen);
	_printf("Actual     : %u\n", alen);
	uelen = printf("Expected   : %u\n", m);
	ualen = _printf("Actual     : %u\n", m);
	printf("Expected   : %u\n", uelen);
	_printf("Actual     : %u\n", ualen);
	printf("Expected   : %u\n", z);
	_printf("Actual     : %u\n", z);
	printf("Expected   : %u\n", INT_MAX);
	_printf("Actual     : %u\n", INT_MAX);
	printf("Expected   : %u\n", INT_MIN);
	_printf("Actual     : %u\n", INT_MIN);
	printf("=====================\n");
	*/

}
