#include <stdio.h>

void print_square(int size)
{
    int i, j;

    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= size; j++)
        {
                putchar('#');
        }
        putchar('\n');
    }
}