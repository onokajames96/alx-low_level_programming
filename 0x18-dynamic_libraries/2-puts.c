#include "main.h"
/**
 *_puts - dispay characters in a string
 *@s: string output
 *
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
