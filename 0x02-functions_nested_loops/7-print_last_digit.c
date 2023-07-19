
#include "main.h"

int print_last_digit(int n)
{
	int a;
	/* Handle negative numbers by converting them to positive */
	if (n < 0)
		n = -n;


	/* Get the last digit using modulo 10 */
	a = n % 10;
	if (a < 0)
		a = -a;


	/* Print the last digit using _putchar */
	_putchar(a + '0');


	/* Return the last digit */		      
       	return (a);

}
