#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	putchar('0');

	for (int number = 1; number <= 9; number++)
	{
		putchar(',');
		putchar(' ');
		putchar(number + '0');
	}

	putchar('\n');

	return (0);
}

