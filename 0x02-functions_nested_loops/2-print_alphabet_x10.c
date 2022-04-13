#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 * Return:  has no return value
*/
void print_alphabet_x10(void)
{
int i = 0;
char ch = 'a';
for (i = 0 ; i <= 9; i++)
{
for (ch = 'a' ; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
}
}
