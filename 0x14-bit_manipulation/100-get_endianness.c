#include "main.h"

/**
 * get_endianness - A function that checks the endianness.
 *
 * Return: 0 If big-endian, 1 If little-endian.
 */

int get_endianness(void)
{
int x = 1;
char *endian = (char *)&x;
if (*endian == 1)
return (1);

return (0);
}
