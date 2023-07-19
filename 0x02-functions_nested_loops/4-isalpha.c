#include "main.h"

int _isalpha(int c)
{
	/* Check if the character is an uppercase or lowercase letter */
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) ? 1 : 0;
}
