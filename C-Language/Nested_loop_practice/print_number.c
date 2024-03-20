#include <stdio.h>

/**
* A function that prints numbers from 0 to 9 followe by new line
* Return: The numbers
*/

void print_numbers(void)
{
	char a;

	for (a = 48; a <= 58; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
