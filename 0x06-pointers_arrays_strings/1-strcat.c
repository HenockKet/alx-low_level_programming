#include <string.h>
/**
 * *_strncat - concatenats n bytes of src to dest
 * @dest: destination string
 * @src: soirce string
 * @n: bytes of src to be concatenated
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
