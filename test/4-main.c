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

	//u
	printf("=====================\n");
	printf("*****UNSIGNED*****\n");
	printf("=====================\n");
	elen = printf("Expected   : %u\n", p);
	alen = _printf("Actual     : %u\n", p);
	printf("Expected   : %u\n", elen);
	_printf("Actual     : %u\n", alen);
	elen = printf("Expected   : %u\n", n);
	alen = _printf("Actual     : %u\n", n);
	printf("Expected   : %u\n", elen);
	_printf("Actual     : %u\n", alen);
	printf("Expected   : %u\n", z);
	_printf("Actual     : %u\n", z);
	printf("Expected   : %u\n", INT_MAX);
	_printf("Actual     : %u\n", INT_MAX);
	printf("Expected   : %u\n", INT_MIN);
	_printf("Actual     : %u\n", INT_MIN);
	printf("=====================\n");
		printf("=====================\n");
	printf("*****OCTAL*****\n");
	printf("=====================\n");

	elen = printf("Expected   : %o\n", p);
	alen = _printf("Actual     : %o\n", p);
	printf("Expected   : %o\n", elen);
	_printf("Actual     : %o\n", alen);
	elen = printf("Expected   : %o\n", n);
	alen = _printf("Actual     : %o\n", n);
	printf("Expected   : %o\n", elen);
	_printf("Actual     : %o\n", alen);
	printf("Expected   : %o\n", z);
	_printf("Actual     : %o\n", z);
	printf("Expected   : %o\n", INT_MAX);
	_printf("Actual     : %o\n", INT_MAX);
	printf("Expected   : %o\n", INT_MIN);
	_printf("Actual     : %o\n", INT_MIN);
	printf("=====================\n");
	printf("=====================\n");
	printf("*****hex*****\n");
	printf("=====================\n");
	elen = printf("Expected   : %x\n", p);
	alen = _printf("Actual     : %x\n", p);
	printf("Expected   : %x\n", elen);
	_printf("Actual     : %x\n", alen);
	elen = printf("Expected   : %x\n", n);
	alen = _printf("Actual     : %x\n", n);
	printf("Expected   : %x\n", elen);
	_printf("Actual     : %x\n", alen);
	printf("Expected   : %x\n", z);
	_printf("Actual     : %x\n", z);
	printf("Expected   : %x\n", INT_MAX);
	_printf("Actual     : %x\n", INT_MAX);
	printf("Expected   : %x\n", INT_MIN);
	_printf("Actual     : %x\n", INT_MIN);
	printf("=====================\n");
	printf("=====================\n");
	printf("=====================\n");
	printf("*****HEX*****\n");
	printf("=====================\n");
	elen = printf("Expected   : %X\n", p);
	alen = _printf("Actual     : %X\n", p);
	printf("Expected   : %X\n", elen);
	_printf("Actual     : %X\n", alen);
	elen = printf("Expected   : %X\n", n);
    alen = _printf("Actual     : %X\n", n);
	printf("Expected   : %X\n", elen);
	_printf("Actual     : %X\n", alen);
	printf("Expected   : %X\n", z);
	_printf("Actual     : %X\n", z);
	printf("Expected   : %X\n", INT_MAX);
	_printf("Actual     : %X\n", INT_MAX);
	printf("Expected   : %X\n", INT_MIN);
	_printf("Actual     : %X\n", INT_MIN);
	printf("=====================\n");
}
