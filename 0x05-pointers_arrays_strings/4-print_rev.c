#include "main.h"
#include <string.h>
/**
 * print_rev - reverses string
 * @str: given string
 * Return: void
 */
void print_rev(char *str)
{
int i;

for(i=(strlen(str)-1);i>=0;i--)
_putchar(str[i]);
_putchar('\n');
}
