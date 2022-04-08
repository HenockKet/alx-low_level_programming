#include<stdio.h>
/**
 * main - has no value
 * Return: 0 after the numbers are printed
*/
int main(void)
{
int ch;

ch = 0;
for (ch = '0'; ch <= '9'; ch++)
{
putchar(ch);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
