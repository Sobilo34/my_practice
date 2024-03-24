#include <stdio.h>

/**
 * main - The entry point
 * Return: 1 on Success and -1 on failure
 */

int main() {
    int num = 42;
    int *ptr = &num;    // Pointer to num
    int **ptr_to_ptr = &ptr; // Pointer to pointer

    printf("Value of num: %d\n", num);
    printf("Value of num using pointer: %d\n", *ptr);
    printf("Value of num using pointer to pointer: %d\n", **ptr_to_ptr);

    // Changing the value of num using pointer
    *ptr = 100;

    printf("Updated value of num using pointer: %d\n", num);
    printf("Updated value of num using pointer to pointer: %d\n", **ptr_to_ptr);

    return 0;
}
