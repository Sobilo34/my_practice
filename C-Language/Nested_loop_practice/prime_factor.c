#include <stdio.h>
#include <math.h>

int main(void)
{
    unsigned long int num = 612852475143, i = 2;

    for (i = 3; i < 782849; i++)
    {
        while (num % i == 0 && num != i)
        {
            num = num / i;
        }
    }
    printf("%lu\n", num);
    return (0);
}