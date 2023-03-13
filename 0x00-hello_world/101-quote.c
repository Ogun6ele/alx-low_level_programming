#include <stdio.h>
#include <unistd.h>
/**
 * main - C program to print a line to the std error
 * Return 1 (success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Ko\
		rpar, 2015-10-19\n", 59);
	return (1);
}
