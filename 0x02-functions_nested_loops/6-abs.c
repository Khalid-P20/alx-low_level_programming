#include "main.h"

int _abs(int n)
{
	/* Check if the number is negative */
	if (n < 0)
	{
		/* If negative, return the opposite of the number */
		return -n;
	}
	else
	{		/* If positive or zero, return the number itself */

		return n;
	}
}
