#include <stdio.h>
/**
 * main - write a program which prints no. of arguments passed into it
 *
 * @args: Argument count
 * @argv: Argument vector
 *
 * Return: It returns 0
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
