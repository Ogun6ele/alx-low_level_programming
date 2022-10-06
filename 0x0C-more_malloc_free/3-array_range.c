#include "main.h"
#include <stdlid.h>

/**
 * array_range - creates an array of integers
 * @min: first integer
 * @max: last integer
 *
 * Return: pointer to newly allocated memory or NULL if false
 */
int *array_range(int min, int max)
{
	int i, R;
	int *a;

	if (min > max)
		return (NULL);
	R = max - min + 1;
	a = malloc(sizeof(int) * R);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < R, i++, min++)
	{
		a[i] = min;
	}
	return (a);
}
