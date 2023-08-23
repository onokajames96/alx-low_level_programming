#include "main.h"
/**
 *_islower - prints lower characters 
 *@c: the character
 *
 * Return: if true 1, else 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
