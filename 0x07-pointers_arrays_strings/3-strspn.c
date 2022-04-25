#include <stdlib.h>
/**
 * _strspn - gets the length of prefix from s
 * @s: given string
 * @accept: soirce of bytes
 * Return: number of characters
 */
unsigned int _strspn(char *s, char *accept)
{
return (strspn(s, accept));
}
