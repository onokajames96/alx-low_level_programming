#include "main.h"

/**
 * flip_bits - the number of different bit between two numbers.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: the number of bits you would need to flip
 *         to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = n ^ m, bits = 0;

while (xor > 0)
{
bits += (xor & 1);
xor >>= 1;
}

return (bits);
}
