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
	(void)p;
	//u
	printf("=====================\n");
	printf("*****u!*****\n");
	printf("=====================\n");
	elen = printf("Expected!   : [%+]\n");
	alen = _printf("Actual!     : [%+]\n");
	elen = printf("Expected!   : [% ]\n");
	alen = _printf("Actual!     : [% ]\n");
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
	elen = printf("Expected   : %lu\n", p);
	alen = _printf("Actual     : %lu\n", p);
	printf("Expected   : %lu\n", elen);
	_printf("Actual     : %lu\n", alen);
	elen = printf("Expected   : %lu\n", n);
	alen = _printf("Actual     : %lu\n", n);
	printf("Expected   : %lu\n", elen);
	_printf("Actual     : %lu\n", alen);
	printf("Expected   : %lu\n", z);
	_printf("Actual     : %lu\n", z);
	printf("Expected   : %lu\n", LONG_MAX);
	_printf("Actual     : %lu\n", LONG_MAX);
	printf("Expected   : %lu\n", LONG_MIN);
	_printf("Actual     : %lu\n", LONG_MIN);
	printf("=====================\n");
	printf("=====================\n");


	printf("*****hex*****\n");
	printf("=====================\n");
	elen = printf("Expected   : %lx\n", p);
	alen = _printf("Actual     : %lx\n", p);
	printf("Expected   : %lx\n", elen);
	_printf("Actual     : %lx\n", alen);
	elen = printf("Expected   : %lx\n", n);
	alen = _printf("Actual     : %lx\n", n);
	printf("Expected   : %lx\n", elen);
	_printf("Actual     : %lx\n", alen);
	printf("Expected   : %lx\n", z);
	_printf("Actual     : %lx\n", z);
	printf("Expected   : %lx\n", LONG_MAX);
	_printf("Actual     : %lx\n", LONG_MAX);
	printf("Expected   : %lx\n", LONG_MIN);
	_printf("Actual     : %lx\n", LONG_MIN);
	
	printf("=====================\n");
	printf("=====================\n");
	printf("=====================\n");
	printf("*****HEX*****\n");
	printf("=====================\n");
	elen = printf("Expected   : %lX\n", p);
	alen = _printf("Actual     : %lX\n", p);
	printf("Expected   : %lX\n", elen);
	_printf("Actual     : %lX\n", alen);
	elen = printf("Expected   : %lX\n", n);
    alen = _printf("Actual     : %lX\n", n);
	printf("Expected   : %lX\n", elen);
	_printf("Actual     : %lX\n", alen);
	printf("Expected   : %lX\n", z);
	_printf("Actual     : %lX\n", z);
	printf("Expected   : %lX\n", LONG_MAX);
	_printf("Actual     : %lX\n", LONG_MAX);
	printf("Expected   : %lX\n", LONG_MIN);
	_printf("Actual     : %lX\n", LONG_MIN);
	printf("=====================\n");










		printf("=====================\n");
	printf("*****u*****\n");
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
	printf("***** hd *****\n");
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
	printf("Expected   : %hd\n", SHRT_MIN);
	_printf("Actual     : %hd\n", SHRT_MIN);
	printf("=====================\n");



	printf("=====================\n");
		printf("=====================\n");
	printf("*****hd*****\n");
	printf("=====================\n");
	p = -1134;
	elen = printf("Expected   : %hu\n", p);
	alen = _printf("Actual     : %hu\n", p);
	printf("Expected   : %hu\n", elen);
	_printf("Actual     : %hu\n", alen);
	elen = printf("Expected   : %hu\n", n);
	alen = _printf("Actual     : %hu\n", n);
	printf("Expected   : %hu\n", elen);
	_printf("Actual     : %hu\n", alen);
	printf("Expected   : %hu\n", z);
	_printf("Actual     : %hu\n", z);
	printf("Expected   : %hu\n", SHRT_MAX);
	_printf("Actual     : %hu\n", SHRT_MAX);
	printf("Expected   : %hu\n", SHRT_MIN);
	_printf("Actual     : %hu\n", SHRT_MIN);
	printf("=====================\n");
	printf("=====================\n");


	printf("*****hex*****\n");
	printf("=====================\n");
	elen = printf("Expected   : %hx\n", p);
	alen = _printf("Actual     : %hx\n", p);
	printf("Expected   : %hx\n", elen);
	_printf("Actual     : %hx\n", alen);
	elen = printf("Expected   : %hx\n", n);
	alen = _printf("Actual     : %hx\n", n);
	printf("Expected   : %hx\n", elen);
	_printf("Actual     : %hx\n", alen);
	printf("Expected   : %hx\n", z);
	_printf("Actual     : %hx\n", z);
	printf("Expected   : %hx\n", SHRT_MAX);
	_printf("Actual     : %hx\n", SHRT_MAX);
	printf("Expected   : %hx\n", SHRT_MIN);
	_printf("Actual     : %hx\n", SHRT_MIN);
	
	printf("=====================\n");
	printf("=====================\n");
	printf("=====================\n");
	printf("*****HEX*****\n");
	printf("=====================\n");
	elen = printf("Expected   : %hX\n", p);
	alen = _printf("Actual     : %hX\n", p);
	printf("Expected   : %hX\n", elen);
	_printf("Actual     : %hX\n", alen);
	elen = printf("Expected   : %hX\n", n);
    alen = _printf("Actual     : %hX\n", n);
	printf("Expected   : %hX\n", elen);
	_printf("Actual     : %hX\n", alen);
	printf("Expected   : %hX\n", z);
	_printf("Actual     : %hX\n", z);
	printf("Expected   : %hX\n", SHRT_MAX);
	_printf("Actual     : %hX\n", SHRT_MAX);
	printf("Expected   : %hX\n", SHRT_MIN);
	_printf("Actual     : %hX\n", SHRT_MIN);
	printf("=====================\n");



}
