#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize = 1;
	while (*ptr)
	{
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ',' ||
				*ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' ||
				*ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' ||
				*ptr == '}')
		{
			capitalize = 1;
		}
		else
		{
			if (capitalize && *ptr >= 'a' && *ptr <= 'z')
			{
				*ptr = *ptr - ('a' - 'A');
			}
			capitalize = 0;
		}
		ptr++;
	}

	return str;
}
