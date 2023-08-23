#include "main.h"
/**
 * _strncat - concatenates one string to another
 * @dest: destination.
 * @src: 
 * @n: the parameters
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int m, k;

	for (m = 0; dest[m] != '\0'; m++)
		;
	for (k = 0; k  < n && src[k] != '\0'; k++)
	{
		dest[m] = src[k];
		m++;
	}
	if (k < n)
	{
	dest[m] = '\0';
	}
	return (dest);
}
