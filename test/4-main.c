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
	printf("*****u*****\n");
	printf("=====================\n");
	elen = printf("Expected   : %%%s%u%u%u%c%u%s\n", "abc", p, p, p, 'Z', p, NULL);
	alen = _printf("Actual     : %%%s%u%u%u%c%u%s\n", "abc", p, p, p, 'Z', p, NULL);
	printf("Expected   : %%%s%u%u%u%c%u%s\n", "abc", elen, elen, elen, 'Z', elen, NULL);
	_printf("Actual     : %%%s%u%u%u%c%u%s\n", "abc", alen, alen, alen, 'Z', alen, NULL);
	elen = printf("Expected   : %%%s%u%u%u%c%u%s\n", "abc", n, n, n, 'Z', n, NULL);
	alen = _printf("Actual     : %%%s%u%u%u%c%u%s\n", "abc", n, n, n, 'Z', n, NULL);
	printf("Expected   : %%%s%u%u%u%c%u%s\n", "abc", elen, elen, elen, 'Z', elen, NULL);
	_printf("Actual     : %%%s%u%u%u%c%u%s\n", "abc", alen, alen, alen, 'Z', alen, NULL);
	printf("Expected   : %%%s%u%u%u%c%u%s\n", "abc", z, z, z, 'Z', z, NULL);
	_printf("Actual     : %%%s%u%u%u%c%u%s\n", "abc", z, z, z, 'Z', z, NULL);
	printf("Expected   : %%%s%u%u%u%c%u%s\n", "abc", INT_MAX, INT_MAX, INT_MAX, 'Z', INT_MAX, NULL);
	_printf("Actual     : %%%s%u%u%u%c%u%s\n", "abc", INT_MAX, INT_MAX, INT_MAX, 'Z', INT_MAX, NULL);

	printf("Expected   : %%%s%u%u%u%c%u%s\n", "abc", INT_MIN, INT_MIN, INT_MIN, 'Z', INT_MIN, NULL);
	_printf("Actual     : %%%s%u%u%u%c%u%s\n", "abc", INT_MIN, INT_MIN, INT_MIN, 'Z', INT_MIN, NULL);

	printf("=====================\n");
		printf("=====================\n");
	printf("*****hd*****\n");
	printf("=====================\n");
	p = -1134;
	elen = printf("Expected   : %%%s%o%o%o%c%o%s\n", "abc", p, p, p, 'Z', p, NULL);
	alen = _printf("Actual     : %%%s%o%o%o%c%o%s\n", "abc", p, p, p, 'Z', p, NULL);
	printf("Expected   : %%%s%o%o%o%c%o%s\n", "abc", elen, elen, elen, 'Z', elen, NULL);
	_printf("Actual     : %%%s%o%o%o%c%o%s\n", "abc", alen, alen, alen, 'Z', alen, NULL);
	elen = printf("Expected   : %%%s%o%o%o%c%o%s\n", "abc", n, n, n, 'Z', n, NULL);
	alen = _printf("Actual     : %%%s%o%o%o%c%o%s\n", "abc", n, n, n, 'Z', n, NULL);
	printf("Expected   : %%%s%o%o%o%c%o%s\n", "abc", elen, elen, elen, 'Z', elen, NULL);
	_printf("Actual     : %%%s%o%o%o%c%o%s\n", "abc", alen, alen, alen, 'Z', alen, NULL);
	printf("Expected   : %%%s%o%o%o%c%o%s\n", "abc", z, z, z, 'Z', z, NULL);
	_printf("Actual     : %%%s%o%o%o%c%o%s\n", "abc", z, z, z, 'Z', z, NULL);
	printf("Expected   : %%%s%o%o%o%c%o%s\n", "abc", INT_MAX, INT_MAX, INT_MAX, 'Z', INT_MAX, NULL);
	_printf("Actual     : %%%s%o%o%o%c%o%s\n", "abc", INT_MAX, INT_MAX, INT_MAX, 'Z', INT_MAX, NULL);
	printf("Expected   : %%%s%o%o%o%c%o%s\n", "abc", INT_MIN, INT_MIN, INT_MIN, 'Z', INT_MIN, NULL);
	_printf("Actual     : %%%s%o%o%o%c%o%s\n", "abc", INT_MIN, INT_MIN, INT_MIN, 'Z', INT_MIN, NULL);
	printf("=====================\n");
	printf("=====================\n");

	
	printf("*****hex*****\n");
	printf("=====================\n");
	elen = printf("Expected   : %%%s%x%x%x%c%x%s\n", "abc", p, p, p, 'Z', p, NULL);
	alen = _printf("Actual     : %%%s%x%x%x%c%x%s\n", "abc", p, p, p, 'Z', p, NULL);
	printf("Expected   : %%%s%x%x%x%c%x%s\n", "abc", elen, elen, elen, 'Z', elen, NULL);
	_printf("Actual     : %%%s%x%x%x%c%x%s\n", "abc", alen, alen, alen, 'Z', alen, NULL);
	elen = printf("Expected   : %%%s%x%x%x%c%x%s\n", "abc", n, n, n, 'Z', n, NULL);
	alen = _printf("Actual     : %%%s%x%x%x%c%x%s\n", "abc", n, n, n, 'Z', n, NULL);
	printf("Expected   : %%%s%x%x%x%c%x%s\n", "abc", elen, elen, elen, 'Z', elen, NULL);
	_printf("Actual     : %%%s%x%x%x%c%x%s\n", "abc", alen, alen, alen, 'Z', alen, NULL);
	printf("Expected   : %%%s%x%x%x%c%x%s\n", "abc", z, z, z, 'Z', z, NULL);
	_printf("Actual     : %%%s%x%x%x%c%x%s\n", "abc", z, z, z, 'Z', z, NULL);
	printf("Expected   : %%%s%x%x%x%c%x%s\n", "abc", INT_MAX, INT_MAX, INT_MAX, 'Z', INT_MAX, NULL);
	_printf("Actual     : %%%s%x%x%x%c%x%s\n", "abc", INT_MAX, INT_MAX, INT_MAX, 'Z', INT_MAX, NULL);
	printf("Expected   : %%%s%x%x%x%c%x%s\n", "abc", INT_MIN, INT_MIN, INT_MIN, 'Z', INT_MIN, NULL);
	_printf("Actual     : %%%s%x%x%x%c%x%s\n", "abc", INT_MIN, INT_MIN, INT_MIN, 'Z', INT_MIN, NULL);
	printf("=====================\n");
	printf("=====================\n");
	printf("=====================\n");
	printf("*****HEX*****\n");
	printf("=====================\n");
	elen = printf("Expected   : %%%s%X%X%X%c%X%s\n", "abc", p, p, p, 'Z', p, NULL);
	alen = _printf("Actual     : %%%s%X%X%X%c%X%s\n", "abc", p, p, p, 'Z', p, NULL);
	printf("Expected   : %%%s%X%X%X%c%X%s\n", "abc", elen, elen, elen, 'Z', elen, NULL);
	_printf("Actual     : %%%s%X%X%X%c%X%s\n", "abc", alen, alen, alen, 'Z', alen, NULL);
	elen = printf("Expected   : %%%s%X%X%X%c%X%s\n", "abc", n, n, n, 'Z', n, NULL);
    alen = _printf("Actual     : %%%s%X%X%X%c%X%s\n", "abc", n, n, n, 'Z', n, NULL);
	printf("Expected   : %%%s%X%X%X%c%X%s\n", "abc", elen, elen, elen, 'Z', elen, NULL);
	_printf("Actual     : %%%s%X%X%X%c%X%s\n", "abc", alen, alen, alen, 'Z', alen, NULL);
	printf("Expected   : %%%s%X%X%X%c%X%s\n", "abc", z, z, z, 'Z', z, NULL);
	_printf("Actual     : %%%s%X%X%X%c%X%s\n", "abc", z, z, z, 'Z', z, NULL);
	printf("Expected   : %%%s%X%X%X%c%X%s\n", "abc", INT_MAX, INT_MAX, INT_MAX, 'Z', INT_MAX, NULL);
	_printf("Actual     : %%%s%X%X%X%c%X%s\n", "abc", INT_MAX, INT_MAX, INT_MAX, 'Z', INT_MAX, NULL);
	printf("Expected   : %%%s%X%X%X%c%X%s\n", "abc", INT_MIN, INT_MIN, INT_MIN, 'Z', INT_MIN, NULL);
	_printf("Actual     : %%%s%X%X%X%c%X%s\n", "abc", INT_MIN, INT_MIN, INT_MIN, 'Z', INT_MIN, NULL);
	printf("=====================\n");

}
