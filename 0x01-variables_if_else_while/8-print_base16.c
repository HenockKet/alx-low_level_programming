#include<stdio.h>
/**
 * main - has no value
 * Return: 0 after the print
*/
int main(void)
{
int ch;
for (ch = '0' ; ch <= '9'; ch++)
putchar(ch);
for (ch = 'a' ; ch <= 'f' ; ch++)
putchar(ch);
putchar('\n');
return (0);
}
