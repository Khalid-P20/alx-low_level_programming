#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *str)
{
	int i, j;
	char leet_letters[5][2] = {{'a', '4'}, {'e', '3'}, {'o', '0'}, {'t', '7'}, {'l', '1'}};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == leet_letters[j][0] || str[i] == leet_letters[j][0] - 'a' + 'A')
			{
				str[i] = leet_letters[j][1];
				break;
			}
		}
	}


	return str;
}
