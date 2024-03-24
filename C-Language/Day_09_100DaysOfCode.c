 #include <stdio.h>

/**
 * main - The entry point
 * Return: 1 on Success and -1 on failure
 */

int main() {
    int num = 10;
    int *ptr;

    ptr = &num;  // Assign the address of num to ptr

    printf("The value of num is: %d\n", num);
    printf("The address of num is: %p\n", &num);
    printf("The value of ptr is: %p\n", ptr); // Address stored in ptr
    printf("The value pointed to by ptr is: %d\n", *ptr); // Dereferencing ptr to access the value

    return 0;
}
