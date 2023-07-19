#include "main.h"

void jack_bauer(void)
{
	int i, j;

	/* Loop for hours from 00 to 23 */
	for (i = 0; i < 24; i++)
	{
	/* Loop for minutes from 00 to 59 */
	for (j = 0; j < 60; j++)
		{
		/* Print the hour and minute in the format HH:MM */
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}					    }
}
