#include "main.h"
#include <string.h>

/**
 * reverse_string - Reverses a string in place.
 * @str: The string to be reversed.
 *
 * Return: void.
 */
void reverse_string(char *str)
{
	int i, j;
	char temp;
	 for (i = 0, j = strlen(str) - 1; i < j; i++, j--)
	 {
		 temp = str[i];
		 str[i] = str[j];
		 str[j] = temp;
	 }
}
/**
 * infinite_add - Adds two numbers represented as strings.
 * @n1: The first number.
 * @n2: The second number.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer r.
 *
 * Return: Pointer to the result string, or 0 if the result cannot be stored.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;
	int max_len = size_r - 1;
	int i, j, k = 0;

	if (len1 > max_len || len2 > max_len)
		return 0;
	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
	{
		int digit1 = (i >= 0) ? n1[i] - '0' : 0;
		int digit2 = (j >= 0) ? n2[j] - '0' : 0;

		int sum = digit1 + digit2 + carry;
		carry = sum / 10;
		sum %= 10;
		if (k < max_len)
			r[k++] = sum + '0';
		else
			return 0;
	}

	r[k] = '\0';
	reverse_string(r);

	return r;
}
