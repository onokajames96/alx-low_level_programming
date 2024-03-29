#include "main.h"
#include <stdio.h>
/**
 *binary_to_uint - A function that converts a binary number to an unsigned int.
 *@b: pointer to a string containing a binary number.
 *
 * Return : the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int k = 0;

if (b == NULL)
return (0);

while (*b)
{
if (*b == '0' || *b == '1')
{
k <<= 1;
k += (*b - '0');
b++;
}
else
{
return (0);
}
}
return (k);
}
