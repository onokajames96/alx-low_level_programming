#include "main.h"

/**
 * set_bit - A function that Sets the value of a bit at given index to 1
 * @n: the number to set.
 * @index: index at which bit is set
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);

*n |= (1 << index);

return (1);
}
