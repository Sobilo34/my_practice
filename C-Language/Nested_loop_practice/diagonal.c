#include <stdio.h>

/**
 * A function that draws a diagonal line on a terminal
 * Return: The diagonal line
*/

void print_diagonal(int n)
{
    int j, i;

    for (j = 1; j <= n; j++)
    {
        for (i = 1; i <= n; i++)
        {
            if (j == i)
                putchar('\\');
            if (i < j)
                putchar(' ');
        }
        putchar('\n');
    }
    
}