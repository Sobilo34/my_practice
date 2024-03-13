#include <stdio.h>

/**
* A function that prints ten times the numbers
* between 0 to 14 followed by newline
* Return: The ten times of the numbers
*/

void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				putchar('1');
			putchar(j % 10 + 48);
		}
		putchar('\n');
	}
}
