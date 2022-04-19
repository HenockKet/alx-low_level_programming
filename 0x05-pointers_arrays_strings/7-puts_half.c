#include <string.h>
#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: given string
 * Return: void
 */
void puts_half(char *str)
{
int i;
int l;
int m;

l = strlen(str);
m = strlen(str) / 2;

for (i = m; i <= l; i++)
_putchar(str[i]);

}
