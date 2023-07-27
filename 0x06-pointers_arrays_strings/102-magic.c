#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a[5] = {0, 1, 2, 3, 4};
	int *p;


	p = &a[2];
	*(p + 1) = 98; /* Add this line to modify the value of a[2] */


	/* Printing the elements of the array */
	printf("a[0] = %d\n", a[0]);
	printf("a[1] = %d\n", a[1]);
	printf("a[2] = %d\n", a[2]);
	printf("a[3] = %d\n", a[3]);
	printf("a[4] = %d\n", a[4]);

	return (0);
}
