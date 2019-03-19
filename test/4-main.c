#include "../holberton.h"

int main(void)
{
	int alen, elen, p, n, z;

	printf("START OF TEST\n");


	printf("=====================\n");
	printf("*****DECIMAL*****\n");
	printf("=====================\n");
	alen = elen = 0;
	p = -1134001;
	n = 4567;
	z = 0;


	printf("=====================\n");
	printf("*****ld*****\n");
	printf("=====================\n");
	elen = printf("Expected   : %ld\n", p);
	alen = _printf("Actual     : %ld\n", p);
	printf("Expected   : %ld\n", elen);
	_printf("Actual     : %ld\n", alen);
	elen = printf("Expected   : %ld\n", n);
	alen = _printf("Actual     : %ld\n", n);
	printf("Expected   : %ld\n", elen);
	_printf("Actual     : %ld\n", alen);
	printf("Expected   : %ld\n", z);
	_printf("Actual     : %ld\n", z);
	printf("Expected   : %ld\n", LONG_MAX);
	_printf("Actual     : %ld\n", LONG_MAX);

	printf("Expected   : %ld\n", LONG_MIN);
	_printf("Actual     : %ld\n", LONG_MIN);

	printf("=====================\n");
		printf("=====================\n");
	printf("*****hd*****\n");
	printf("=====================\n");
	p = -1134;
	elen = printf("Expected   : %hd\n", p);
	alen = _printf("Actual     : %hd\n", p);
	printf("Expected   : %hd\n", elen);
	_printf("Actual     : %hd\n", alen);
	elen = printf("Expected   : %hd\n", n);
	alen = _printf("Actual     : %hd\n", n);
	printf("Expected   : %hd\n", elen);
	_printf("Actual     : %hd\n", alen);
	printf("Expected   : %hd\n", z);
	_printf("Actual     : %hd\n", z);
	printf("Expected   : %hd\n", SHRT_MAX);
	_printf("Actual     : %hd\n", SHRT_MAX);
	printf("Expected   : %x\n", SHRT_MIN);
	_printf("Actual     : %x\n", SHRT_MIN);
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
