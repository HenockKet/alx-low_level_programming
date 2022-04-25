#include <stdlib.h>
/**
 * *_memset - fills memory area s from n bytes of b
 * @s: destination
 * @b: source
 * @n: number of bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
memset(s, b, n);
return (s);
}
