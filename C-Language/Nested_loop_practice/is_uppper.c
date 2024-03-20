#include <stdio.h>

/**
 * A fucntion that checks an uppercase letter
 * Return: 1 if letter is ppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c > 64 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
