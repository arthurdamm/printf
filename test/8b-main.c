#include "../holberton.h"

int main(void)
{

	// NULL
	printf("START OF TEST\n");
	int elen, alen;
	char *str = "%";

	
		printf("*****[ %%+ d ]*****\n");
	printf("=====================\n");
	elen = printf("Expected   : %+ s\n", str);
	alen = _printf("Actual     : %+ s\n", str);
	printf("Expected   : %+ s\n", str);
	_printf("Actual     : %+ s\n", str);
	elen = printf("Expected   : %+ s\n", str);
	alen = _printf("Actual     : %+ s\n", str);
	printf("Expected   : %+#d\n", elen);
	_printf("Actual     : %+#d\n", alen);
	printf("Expected   : %+ s\n", str);
	_printf("Actual     : %+ s\n", str);
	printf("Expected   : %+ s\n", str);
	_printf("Actual     : %+ s\n", str);
	printf("Expected   : %+ s\n", str);
	_printf("Actual     : %+ s\n", str);
	printf("Expected   : %+ s\n", str);
	_printf("Actual     : %+ s\n", str);
	printf("=====================\n");

	printf("*****[ %%+ u ]*****\n");
	printf("=====================\n");
	
	elen = printf("Expected   : %+ s\n", str);
	alen = _printf("Actual     : %+ s\n", str);
	printf("Expected   : %+ s\n", str);
	_printf("Actual     : %+ s\n", str);
	elen = printf("Expected   : %+ s\n", str);
	alen = _printf("Actual     : %+ s\n", str);
	printf("Expected   : %+#d\n", elen);
	_printf("Actual     : %+#d\n", alen);
	printf("Expected   : %+ s\n", str);
	_printf("Actual     : %+ s\n", str);
	printf("Expected   : %+ s\n", str);
	_printf("Actual     : %+ s\n", str);
	printf("Expected   : %+ s\n", str);
	_printf("Actual     : %+ s\n", str);
	printf("Expected   : %+ s\n", str);
	_printf("Actual     : %+ s\n", str);
	printf("=====================\n");

	printf("*****[ + hex ]*****\n");
	printf("=====================\n");
	elen = printf("Expected   : %+ s\n", str);
	alen = _printf("Actual     : %+ s\n", str);
	printf("Expected   : %+ s\n", str);
	_printf("Actual     : %+ s\n", str);
	elen = printf("Expected   : %+ s\n", str);
	alen = _printf("Actual     : %+ s\n", str);
	printf("Expected   : %+#d\n", elen);
	_printf("Actual     : %+#d\n", alen);
	printf("Expected   : %+#d\n", elen);
	_printf("Actual     : %+#d\n", alen);
	printf("Expected   : %+ s\n", str);
	_printf("Actual     : %+ s\n", str);
	printf("Expected   : %+ s\n", str);
	_printf("Actual     : %+ s\n", str);
	printf("Expected   : %+ s\n", str);
	_printf("Actual     : %+ s\n", str);
	printf("Expected   : %+ s\n", str);
	_printf("Actual     : %+ s\n", str);
	printf("=====================\n");

	printf("*****[ + HEX ]*****\n");
	printf("=====================\n");
	elen = printf("Expected   : %+ s\n", str);
	alen = _printf("Actual     : %+ s\n", str);
	printf("Expected   : %+ s\n", str);
	_printf("Actual     : %+ s\n", str);
	elen = printf("Expected   : %+ s\n", str);
    alen = _printf("Actual     : %+ s\n", str);
    printf("Expected   : %+#d\n", elen);
	_printf("Actual     : %+#d\n", alen);
    printf("Expected   : %+#d\n", elen);
	_printf("Actual     : %+#d\n", alen);
	printf("Expected   : %+ s\n", str);
	_printf("Actual     : %+ s\n", str);
	printf("Expected   : %+ s\n", str);
	_printf("Actual     : %+ s\n", str);
	printf("Expected   : %+ s\n", str);
	_printf("Actual     : %+ s\n", str);
	printf("Expected   : %+ s\n", str);
	_printf("Actual     : %+ s\n", str);
	printf("=====================\n");

	/******  							**/


		printf("*****[ %%+#d ]*****\n");
	printf("=====================\n");
	elen = printf("Expected   : %+#s\n", str);
	alen = _printf("Actual     : %+#s\n", str);
	printf("Expected   : %+#s\n", str);
	_printf("Actual     : %+#s\n", str);
	elen = printf("Expected   : %+#s\n", str);
	alen = _printf("Actual     : %+#s\n", str);
	printf("Expected   : %+#d\n", elen);
	_printf("Actual     : %+#d\n", alen);
	printf("Expected   : %+#d\n", elen);
	_printf("Actual     : %+#d\n", alen);
	printf("Expected   : %+#s\n", str);
	_printf("Actual     : %+#s\n", str);
	printf("Expected   : %+#s\n", str);
	_printf("Actual     : %+#s\n", str);
	printf("Expected   : %+#s\n", str);
	_printf("Actual     : %+#s\n", str);
	printf("=====================\n");

	printf("*****[ %%+#u ]*****\n");
	printf("=====================\n");
	
	elen = printf("Expected   : %+#s\n", str);
	alen = _printf("Actual     : %+#s\n", str);
	printf("Expected   : %+#s\n", str);
	_printf("Actual     : %+#s\n", str);
	elen = printf("Expected   : %+#s\n", str);
	alen = _printf("Actual     : %+#s\n", str);
	printf("Expected   : %+#d\n", elen);
	_printf("Actual     : %+#d\n", alen);
	printf("Expected   : %+#s\n", str);
	_printf("Actual     : %+#s\n", str);
	printf("Expected   : %+#s\n", str);
	_printf("Actual     : %+#s\n", str);
	printf("Expected   : %+#s\n", str);
	_printf("Actual     : %+#s\n", str);
	printf("Expected   : %+#s\n", str);
	_printf("Actual     : %+#s\n", str);
	printf("=====================\n");

	printf("*****[ +#hex ]*****\n");
	printf("=====================\n");
	elen = printf("Expected   : %+#s\n", str);
	alen = _printf("Actual     : %+#s\n", str);
	printf("Expected   : %+#s\n", str);
	_printf("Actual     : %+#s\n", str);
	elen = printf("Expected   : %+#s\n", str);
	alen = _printf("Actual     : %+#s\n", str);
	printf("Expected   : %+#d\n", elen);
	_printf("Actual     : %+#d\n", alen);
	printf("Expected   : %+#s\n", str);
	_printf("Actual     : %+#s\n", str);
	printf("Expected   : %+#s\n", str);
	_printf("Actual     : %+#s\n", str);
	printf("Expected   : %+#s\n", str);
	_printf("Actual     : %+#s\n", str);
	printf("Expected   : %+#s\n", str);
	_printf("Actual     : %+#s\n", str);
	printf("=====================\n");

	printf("*****[ +#HEX ]*****\n");
	printf("=====================\n");
	elen = printf("Expected   : %+#s\n", str);
	alen = _printf("Actual     : %+#s\n", str);
	printf("Expected   : %+#s\n", str);
	_printf("Actual     : %+#s\n", str);
	elen = printf("Expected   : %+#s\n", str);
    alen = _printf("Actual     : %+#s\n", str);
    printf("Expected   : %+#d\n", elen);
	_printf("Actual     : %+#d\n", alen);
	printf("Expected   : %+#s\n", str);
	_printf("Actual     : %+#s\n", str);
	printf("Expected   : %+#s\n", str);
	_printf("Actual     : %+#s\n", str);
	printf("Expected   : %+#s\n", str);
	_printf("Actual     : %+#s\n", str);
	printf("Expected   : %+#s\n", str);
	_printf("Actual     : %+#s\n", str);
	printf("=====================\n");




	/*         "%#x"       */

			printf("*****[ %%+# d ]*****\n");
	printf("=====================\n");
	elen = printf("Expected   : %+# s\n", str);
	alen = _printf("Actual     : %+# s\n", str);
	printf("Expected   : %+# s\n", str);
	_printf("Actual     : %+# s\n", str);
	elen = printf("Expected   : %+# s\n", str);
	alen = _printf("Actual     : %+# s\n", str);
	printf("Expected   : %+#d\n", elen);
	_printf("Actual     : %+#d\n", alen);
	printf("Expected   : %+# s\n", str);
	_printf("Actual     : %+# s\n", str);
	printf("Expected   : %+# s\n", str);
	_printf("Actual     : %+# s\n", str);
	printf("Expected   : %+# s\n", str);
	_printf("Actual     : %+# s\n", str);
	printf("Expected   : %+# s\n", str);
	_printf("Actual     : %+# s\n", str);
	printf("=====================\n");

	printf("*****[ %%+# u ]*****\n");
	printf("=====================\n");
	
	elen = printf("Expected   : %+# s\n", str);
	alen = _printf("Actual     : %+# s\n", str);
	printf("Expected   : %+# s\n", str);
	_printf("Actual     : %+# s\n", str);
	elen = printf("Expected   : %+# s\n", str);
	alen = _printf("Actual     : %+# s\n", str);
	printf("Expected   : %+#d\n", elen);
	_printf("Actual     : %+#d\n", alen);
	printf("Expected   : %+# s\n", str);
	_printf("Actual     : %+# s\n", str);
	printf("Expected   : %+# s\n", str);
	_printf("Actual     : %+# s\n", str);
	printf("Expected   : %+# s\n", str);
	_printf("Actual     : %+# s\n", str);
	printf("Expected   : %+# s\n", str);
	_printf("Actual     : %+# s\n", str);
	printf("=====================\n");

	printf("*****[ +# hex ]*****\n");
	printf("=====================\n");
	elen = printf("Expected   : %+# s\n", str);
	alen = _printf("Actual     : %+# s\n", str);
	printf("Expected   : %+# s\n", str);
	_printf("Actual     : %+# s\n", str);
	elen = printf("Expected   : %+# s\n", str);
	alen = _printf("Actual     : %+# s\n", str);
	printf("Expected   : %+#d\n", elen);
	_printf("Actual     : %+#d\n", alen);
	printf("Expected   : %+# s\n", str);
	_printf("Actual     : %+# s\n", str);
	printf("Expected   : %+# s\n", str);
	_printf("Actual     : %+# s\n", str);
	printf("Expected   : %+# s\n", str);
	_printf("Actual     : %+# s\n", str);
	printf("Expected   : %+# s\n", str);
	_printf("Actual     : %+# s\n", str);
	printf("=====================\n");

	printf("*****[ +# HEX ]*****\n");
	printf("=====================\n");
	elen = printf("Expected   : %+# s\n", str);
	alen = _printf("Actual     : %+# s\n", str);
	printf("Expected   : %+# s\n", str);
	_printf("Actual     : %+# s\n", str);
	elen = printf("Expected   : %+# s\n", str);
    alen = _printf("Actual     : %+# s\n", str);
    printf("Expected   : %+#d\n", elen);
	_printf("Actual     : %+#d\n", alen);
	printf("Expected   : %+# s\n", str);
	_printf("Actual     : %+# s\n", str);
	printf("Expected   : %+# s\n", str);
	_printf("Actual     : %+# s\n", str);
	printf("Expected   : %+# s\n", str);
	_printf("Actual     : %+# s\n", str);
	printf("Expected   : %+# s\n", str);
	_printf("Actual     : %+# s\n", str);
	printf("=====================\n");

	elen = printf("Expected   : % % % d\n", INT_MAX);
	alen = _printf("Actual     : % % % d\n", INT_MAX);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	(void)elen;
	(void)alen;
}
