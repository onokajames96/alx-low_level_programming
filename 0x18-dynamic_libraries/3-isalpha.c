#include "main.h"
/**
 *_isalpha - a function that looks for alphabets.
 *@c: character checked
 *Return:  if true 1, otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
