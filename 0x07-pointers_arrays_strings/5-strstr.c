#include "main.h"
#include <stddef.h>

/**
 *  _strstr - Locates a substring.
 *  @haystack: Pointer to the string to search.
 *  @needle: Pointer to the substring to locate.
 *
 *  Return: A pointer to the beginning of the located substring,
 *  or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *haystack_ptr = haystack;
		char *needle_ptr = needle;
		int found = 1;

		while (*needle_ptr != '\0')
		{
			if (*haystack_ptr != *needle_ptr)
			{
				found = 0;
				break;
			}

			haystack_ptr++;
			needle_ptr++;
		}

		if (found)
			{
				return haystack;
			}

		haystack++;
	}

	return NULL;
}
