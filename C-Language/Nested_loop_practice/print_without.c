#include <stdio.h>

/**
* A function that prints numbers from 0 to 9
* without 2 and 4 followed by a new line
* Return: The numbers
*/

void print_most_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		if (c != 50 && c != 52)
		{
			putchar(c);
		}
	}
	putchar('\n');
}
