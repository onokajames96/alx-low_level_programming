#include "main.h"
/**
 *_strcmp - a function that comperes two strings.
 *@s1:pointer to first string.
 *@s2:pointer to second string.
 *
 * Return: if equal return 0,or if not return integer value.
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0')
{
if (*s1 != *s2)
{
return (*s1 - *s2);
}
s1++;
s2++;
}
return (*s1 - *s2);
}
