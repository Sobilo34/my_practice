#include <stdio.h>

/**
 * A fucntion that checks if an input is a digit
 * Return: 1 if is digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}
