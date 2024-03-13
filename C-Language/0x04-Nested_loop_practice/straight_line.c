#include <stdio.h>

/**
* A function that prints a straight line
* Return: The straight line
*/

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		putchar(95);
	}
	putchar('\n');
}

