#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first integer
 * @max: last integer
 *
 * Return: pointer to newly allocated memory or NULL if false
 */
int *array_range(int min, int max)
{
	int i, ~;
	int *a;

	if (min > max)
		return (NULL);
	~ = max - min + 1;
	a = malloc(sizeof(int) * ~);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < ~, i++, min++)
	{
		a[i] = min;
	}
	return (a);
}
