#include <string.h>
/**
 * *_strncpy - copies string from src to dest
 * @dest: string to copy to
 * @src: string to copy from
 * @n: number of bytes to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
