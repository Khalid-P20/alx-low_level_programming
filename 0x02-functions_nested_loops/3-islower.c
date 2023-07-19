#include "main.h"

int _islower(int c)
{
	    /* Check if the character is within the lowercase ASCII range */
	    return (c >= 'a' && c <= 'z') ? 1 : 0;
}

