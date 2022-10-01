nclude <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: Character to print
 *
 * Return: 1 on success
 * On error, -1 is returned, errno is also set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
