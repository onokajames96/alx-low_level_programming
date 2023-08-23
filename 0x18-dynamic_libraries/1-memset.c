#include "main.h"
/**
 *_memset - sets memory
 *@s: pointer.
 * @b: the value.
 * @n: the number.
 *
 * Return: the pointer to mem location
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}

