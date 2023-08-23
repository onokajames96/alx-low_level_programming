#include "main.h"
/**
 *_memcpy - copies bytes from one place to another.
 *@dest: the destination.
 *@src: source.
 *@n: the number.
 *
 * Return: destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int y;
	for ( y = 0; y < n; y++)
	{
		dest[y] = src[y];
	}
	return (dest);
}
