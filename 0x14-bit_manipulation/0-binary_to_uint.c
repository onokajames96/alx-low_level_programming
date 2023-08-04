#include "main.h"
#include <stdio.h>
/**
 *binary_to_uint - A function that converts a binary number to an unsigned int.
 *@b: pointer to a string having a binary number.
 *
 * Return : Converted number, or 0 if
 *          there is one or more chars in the string b that is not 0 or 1
 *         b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
int i = 0;
unsigned int k = 0;

  if (b == NULL)
    return 0;

  while (b[i] == '0' || b[i] == '1')
  {
    k <<= 1;
   k += b[i]-'0';
 i++;
 }
 return (k);
}
