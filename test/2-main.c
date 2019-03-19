#include "../holberton.h"

int main(void)
{

	int alen, elen, n;

	printf("=====================\n");
	printf("*****DECIMAL*****\n");
	printf("=====================\n");
	alen = elen = 0;
	n = -4567;
	
	elen = printf("Expected   : %d\n", n);
	alen = _printf("Actual     : %d\n", n);
	printf("Expected   : %d\n", elen);
	_printf("Actual     : %d\n", alen);

	printf("Expected   : %d\n", INT_MIN);
	_printf("Actual     : %d\n", INT_MIN);

}
