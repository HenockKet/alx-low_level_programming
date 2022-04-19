#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character in string
 * @str: given string
 * Return: void
 */
void puts2(char *str)
{
int i;
int l;

l = strlen(str);
for (i = 0; i <= l; i+= 2)
_putchar(str[i]);
}
