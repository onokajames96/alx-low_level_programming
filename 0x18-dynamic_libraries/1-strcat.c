#include "main.h"
/**
 *_strcat - appends contents of one string to another.
 *@dest: destination
 *@src: the source.
 *
 *Return: the addressof  destination
 */
char *_strcat(char *dest, char *src)
{
	int num, y;

	for (num = 0; dest[num] != '\0'; num++)
		;
	for (y = 0; src[y] != '\0'; y++)
	{
	dest[num] = src[y];
	num++;
	}
	return (dest);
}
