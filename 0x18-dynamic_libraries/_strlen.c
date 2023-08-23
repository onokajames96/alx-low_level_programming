#include "main.h"
#include <string.h>
/**
 *_strlen - calculates the length of a string.
 *@s: string.
 *
 *Return: the strings length.
 */
int _strlen(char *s)
{
int len;

for (len = 0; s[len] != '\0'; ++len)
		;
return (len);
}
