#include "main.h"
/**
 *_isupper - looks for uppercase characters, if not return 0.
 *@c: the character.
 *
 *Return: if true 1, else retun 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
