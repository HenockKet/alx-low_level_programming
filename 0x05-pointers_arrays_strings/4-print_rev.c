#include <stdio.h>
#include <string.h>
/**
 * print_rev - reverses string
 * @str: given string
 * Return: void
 */
void print_rev(char *str)
{
int i;

for(int i=(strlen(str)-1);i>=0;i--)
_putchar(str[i]);
_putchar('\n');
}
