#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int sum_main = 0;
	int sum_secondary = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum_main += a[i * size + i];
		sum_secondary += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum_main, sum_secondary);
}
