#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *rot13(char *str)
{
	char *ptr = str;
	char *rot13_upper = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char *rot13_lower = "nopqrstuvwxyzabcdefghijklm";
	int i;


	while (*ptr)
	{
		if ((*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= 'a' && *ptr <= 'z'))
		{
			if (*ptr >= 'A' && *ptr <= 'Z')
				i = *ptr - 'A';
			else
				i = *ptr - 'a';

			*ptr = (char)((*ptr >= 'A' && *ptr <= 'Z') ? rot13_upper[i] : rot13_lower[i]);
		}
		ptr++;
	}


	return str;
}
