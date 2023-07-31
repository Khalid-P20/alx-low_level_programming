#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the substring containing acceptable characters.
 *
 * Return: The number of bytes in the initial segment of s that consist only
 * of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int count = 0;
	char *accept_ptr;

	for (i = 0; s[i]; i++)
	{
		accept_ptr = accept;
		for (j = 0; accept_ptr[j]; j++)
		{
			if (s[i] == accept_ptr[j])
			{
				count++;
				break;
			}
		}
		if (!accept_ptr[j])
			break;
	}

	return count;
}
