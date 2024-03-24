#include <stdio.h>

/**
 * main - The entry point
 * Return: 1 on Success and -1 on failure
 */

int main() {
    char str[] = "Hello, world!\n";
    char *ptr = str; // Pointer to the first element of the array

    printf("String: %s\n", str);
    printf("Using array notation: \n");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    printf("Using pointer notation: \n");
    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }
}
