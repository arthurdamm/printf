#include "../holberton.h"

int main(void)
{
	int alen, elen, p, n, z;

	// NULL
	printf("START OF TEST\n");

	alen = elen = 0;
	p = -1134001;
	n = 4567;
	z = 0;

	
		printf("*****[ %%+ d ]*****\n");
	printf("=====================\n");
	elen = printf("Expected   : %+ d\n", p);
	alen = _printf("Actual     : %+ d\n", p);
	printf("Expected   : %+ d\n", elen);
	_printf("Actual     : %+ d\n", alen);
	elen = printf("Expected   : %+ d\n", n);
	alen = _printf("Actual     : %+ d\n", n);
	printf("Expected   : %+ d\n", elen);
	_printf("Actual     : %+ d\n", alen);
	printf("Expected   : %+ d\n", z);
	_printf("Actual     : %+ d\n", z);
	printf("Expected   : %+ d\n", INT_MAX);
	_printf("Actual     : %+ d\n", INT_MAX);
	printf("Expected   : %+ d\n", INT_MIN);
	_printf("Actual     : %+ d\n", INT_MIN);
	printf("=====================\n");

	printf("*****[ %%+ u ]*****\n");
	printf("=====================\n");
	p = -1134;
	elen = printf("Expected   : %+ u\n", p);
	alen = _printf("Actual     : %+ u\n", p);
	printf("Expected   : %+ u\n", elen);
	_printf("Actual     : %+ u\n", alen);
	elen = printf("Expected   : %+ u\n", n);
	alen = _printf("Actual     : %+ u\n", n);
	printf("Expected   : %+ u\n", elen);
	_printf("Actual     : %+ u\n", alen);
	printf("Expected   : %+ u\n", z);
	_printf("Actual     : %+ u\n", z);
	printf("Expected   : %+ u\n", INT_MAX);
	_printf("Actual     : %+ u\n", INT_MAX);
	printf("Expected   : %+ u\n", INT_MIN);
	_printf("Actual     : %+ u\n", INT_MIN);
	printf("=====================\n");

	printf("*****[ + hex ]*****\n");
	printf("=====================\n");
	elen = printf("Expected   : %+ x\n", p);
	alen = _printf("Actual     : %+ x\n", p);
	printf("Expected   : %+ x\n", elen);
	_printf("Actual     : %+ x\n", alen);
	elen = printf("Expected   : %+ x\n", n);
	alen = _printf("Actual     : %+ x\n", n);
	printf("Expected   : %+ x\n", elen);
	_printf("Actual     : %+ x\n", alen);
	printf("Expected   : %+ x\n", z);
	_printf("Actual     : %+ x\n", z);
	printf("Expected   : %+ x\n", INT_MAX);
	_printf("Actual     : %+ x\n", INT_MAX);
	printf("Expected   : %+ x\n", INT_MIN);
	_printf("Actual     : %+ x\n", INT_MIN);
	printf("=====================\n");

	printf("*****[ + HEX ]*****\n");
	printf("=====================\n");
	elen = printf("Expected   : %+ o\n", p);
	alen = _printf("Actual     : %+ o\n", p);
	printf("Expected   : %+ o\n", elen);
	_printf("Actual     : %+ o\n", alen);
	elen = printf("Expected   : %+ o\n", n);
    alen = _printf("Actual     : %+ o\n", n);
	printf("Expected   : %+ o\n", elen);
	_printf("Actual     : %+ o\n", alen);
	printf("Expected   : %+ o\n", z);
	_printf("Actual     : %+ o\n", z);
	printf("Expected   : %+ o\n", INT_MAX);
	_printf("Actual     : %+ o\n", INT_MAX);
	printf("Expected   : %+ o\n", INT_MIN);
	_printf("Actual     : %+ o\n", INT_MIN);
	printf("=====================\n");

	/******  							**/


		printf("*****[ %%+#d ]*****\n");
	printf("=====================\n");
	elen = printf("Expected   : %+#d\n", p);
	alen = _printf("Actual     : %+#d\n", p);
	printf("Expected   : %+#d\n", elen);
	_printf("Actual     : %+#d\n", alen);
	elen = printf("Expected   : %+#d\n", n);
	alen = _printf("Actual     : %+#d\n", n);
	printf("Expected   : %+#d\n", elen);
	_printf("Actual     : %+#d\n", alen);
	printf("Expected   : %+#d\n", z);
	_printf("Actual     : %+#d\n", z);
	printf("Expected   : %+#d\n", INT_MAX);
	_printf("Actual     : %+#d\n", INT_MAX);
	printf("Expected   : %+#d\n", INT_MIN);
	_printf("Actual     : %+#d\n", INT_MIN);
	printf("=====================\n");

	printf("*****[ %%+#u ]*****\n");
	printf("=====================\n");
	p = -1134;
	elen = printf("Expected   : %+#u\n", p);
	alen = _printf("Actual     : %+#u\n", p);
	printf("Expected   : %+#u\n", elen);
	_printf("Actual     : %+#u\n", alen);
	elen = printf("Expected   : %+#u\n", n);
	alen = _printf("Actual     : %+#u\n", n);
	printf("Expected   : %+#u\n", elen);
	_printf("Actual     : %+#u\n", alen);
	printf("Expected   : %+#u\n", z);
	_printf("Actual     : %+#u\n", z);
	printf("Expected   : %+#u\n", INT_MAX);
	_printf("Actual     : %+#u\n", INT_MAX);
	printf("Expected   : %+#u\n", INT_MIN);
	_printf("Actual     : %+#u\n", INT_MIN);
	printf("=====================\n");

	printf("*****[ +#hex ]*****\n");
	printf("=====================\n");
	elen = printf("Expected   : %+#x\n", p);
	alen = _printf("Actual     : %+#x\n", p);
	printf("Expected   : %+#x\n", elen);
	_printf("Actual     : %+#x\n", alen);
	elen = printf("Expected   : %+#x\n", n);
	alen = _printf("Actual     : %+#x\n", n);
	printf("Expected   : %+#x\n", elen);
	_printf("Actual     : %+#x\n", alen);
	printf("Expected   : %+#x\n", z);
	_printf("Actual     : %+#x\n", z);
	printf("Expected   : %+#x\n", INT_MAX);
	_printf("Actual     : %+#x\n", INT_MAX);
	printf("Expected   : %+#x\n", INT_MIN);
	_printf("Actual     : %+#x\n", INT_MIN);
	printf("=====================\n");

	printf("*****[ +#HEX ]*****\n");
	printf("=====================\n");
	elen = printf("Expected   : %+#o\n", p);
	alen = _printf("Actual     : %+#o\n", p);
	printf("Expected   : %+#o\n", elen);
	_printf("Actual     : %+#o\n", alen);
	elen = printf("Expected   : %+#o\n", n);
    alen = _printf("Actual     : %+#o\n", n);
	printf("Expected   : %+#o\n", elen);
	_printf("Actual     : %+#o\n", alen);
	printf("Expected   : %+#o\n", z);
	_printf("Actual     : %+#o\n", z);
	printf("Expected   : %+#o\n", INT_MAX);
	_printf("Actual     : %+#o\n", INT_MAX);
	printf("Expected   : %+#o\n", INT_MIN);
	_printf("Actual     : %+#o\n", INT_MIN);
	printf("=====================\n");




	/*         "%#x"       */

			printf("*****[ %%+# d ]*****\n");
	printf("=====================\n");
	elen = printf("Expected   : %+# d\n", p);
	alen = _printf("Actual     : %+# d\n", p);
	printf("Expected   : %+# d\n", elen);
	_printf("Actual     : %+# d\n", alen);
	elen = printf("Expected   : %+# d\n", n);
	alen = _printf("Actual     : %+# d\n", n);
	printf("Expected   : %+# d\n", elen);
	_printf("Actual     : %+# d\n", alen);
	printf("Expected   : %+# d\n", z);
	_printf("Actual     : %+# d\n", z);
	printf("Expected   : %+# d\n", INT_MAX);
	_printf("Actual     : %+# d\n", INT_MAX);
	printf("Expected   : %+# d\n", INT_MIN);
	_printf("Actual     : %+# d\n", INT_MIN);
	printf("=====================\n");

	printf("*****[ %%+# u ]*****\n");
	printf("=====================\n");
	p = -1134;
	elen = printf("Expected   : %+# u\n", p);
	alen = _printf("Actual     : %+# u\n", p);
	printf("Expected   : %+# u\n", elen);
	_printf("Actual     : %+# u\n", alen);
	elen = printf("Expected   : %+# u\n", n);
	alen = _printf("Actual     : %+# u\n", n);
	printf("Expected   : %+# u\n", elen);
	_printf("Actual     : %+# u\n", alen);
	printf("Expected   : %+# u\n", z);
	_printf("Actual     : %+# u\n", z);
	printf("Expected   : %+# u\n", INT_MAX);
	_printf("Actual     : %+# u\n", INT_MAX);
	printf("Expected   : %+# u\n", INT_MIN);
	_printf("Actual     : %+# u\n", INT_MIN);
	printf("=====================\n");

	printf("*****[ +# hex ]*****\n");
	printf("=====================\n");
	elen = printf("Expected   : %+# x\n", p);
	alen = _printf("Actual     : %+# x\n", p);
	printf("Expected   : %+# x\n", elen);
	_printf("Actual     : %+# x\n", alen);
	elen = printf("Expected   : %+# x\n", n);
	alen = _printf("Actual     : %+# x\n", n);
	printf("Expected   : %+# x\n", elen);
	_printf("Actual     : %+# x\n", alen);
	printf("Expected   : %+# x\n", z);
	_printf("Actual     : %+# x\n", z);
	printf("Expected   : %+# x\n", INT_MAX);
	_printf("Actual     : %+# x\n", INT_MAX);
	printf("Expected   : %+# x\n", INT_MIN);
	_printf("Actual     : %+# x\n", INT_MIN);
	printf("=====================\n");

	printf("*****[ +# HEX ]*****\n");
	printf("=====================\n");
	elen = printf("Expected   : %+# o\n", p);
	alen = _printf("Actual     : %+# o\n", p);
	printf("Expected   : %+# o\n", elen);
	_printf("Actual     : %+# o\n", alen);
	elen = printf("Expected   : %+# o\n", n);
    alen = _printf("Actual     : %+# o\n", n);
	printf("Expected   : %+# o\n", elen);
	_printf("Actual     : %+# o\n", alen);
	printf("Expected   : %+# o\n", z);
	_printf("Actual     : %+# o\n", z);
	printf("Expected   : %+# o\n", INT_MAX);
	_printf("Actual     : %+# o\n", INT_MAX);
	printf("Expected   : %+# o\n", INT_MIN);
	_printf("Actual     : %+# o\n", INT_MIN);
	printf("=====================\n");


}
