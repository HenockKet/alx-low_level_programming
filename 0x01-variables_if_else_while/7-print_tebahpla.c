#include<stdio.h>
/**
 * main - has no value
 * Return: 0 after alphabet is printed
*/
int main(void)
{
char c;

c = 'z';
for (c = 'z' ; c >= 'a' ; c--)
putchar(c);
putchar('\n');
return (0);
}
