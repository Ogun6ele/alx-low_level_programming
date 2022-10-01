#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all arguments received
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always success (0)
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
