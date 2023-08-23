#include "main.h"
/**
 *_isdigit - evaluates if the characters are digits.
 *@c: the character.
 *
 *Return: 0.
 */
int _isdigit(int c)
{
	if(c <= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
