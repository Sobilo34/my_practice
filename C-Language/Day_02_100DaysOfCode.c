#include <stdio.h>

/**
 * my_tolower - A program that converts a string to lowercase
 * Return: The name in lowercase
 */

void my_tolower(char *name)
{
	int i;

	for (i = 0; name[i] != '\0'; i++)
	{
		if (name[i] >= 'A' && name[i] <= 'Z')
		{
			/* Convert the input to lowercase*/
			name[i] = name[i] + ('a' - 'A');
		}
	}
}

/**
 * my_toascii - A function that prints the ACSII value of characters in a string
 * @name: The string to be printed in ACSII
 */

void my_toascii(const char *name)
{
	int i;
	for (i = 0; name[i] != '\0'; i++)
	{
		putchar(name[i]); /* Print the name*/
		printf(": %d\n", name[i]); /* Print its acsii value */
	}
}


/**
 * main - The entry point
 * Return: 0 if success and -1 if it fails
 */

int main(void)
{
	char name[100];

	printf("Type your name here :");
	scanf("%s", name); /* Accept user's input*/

	my_tolower(name); /* convert to lowercase */
	printf("Here is your name in lowercase and it ASCII value: \n");
	my_toascii(name); /* Convert to ascii value*/

	return (0);
}
