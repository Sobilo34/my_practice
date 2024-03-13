#include <stdio.h>

void print_triangle(int size)
{
    int i, j, space;

    for (i = 1; i <= size; i++)
    {
        space = size - i;s
        for (space = size; space >= size; space--)
        {
            putchar(' ');
        }
        for (j = 1; j <= i; j++)
            putchar('#');
        putchar('\n');
    }
    putchar('\n');
}
