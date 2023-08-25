#include <stddef.h>

int _strlen(char *s)
{
int len = 0;
if (s == NULL)
{
	return (len);
}
while (s[len] != '\0')
{
	len++;
}
return (len);
}
