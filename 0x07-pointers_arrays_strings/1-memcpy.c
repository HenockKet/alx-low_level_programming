#include <stdlib.h>
/**
 * *_memcpy - copies n bytes memory area of src to dest
 * @dest: destination
 * @src: source
 * @n: bytes of memeory area
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
memcpy(dest, src, n);
return (dest);
}
