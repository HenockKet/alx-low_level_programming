#include<stdio.h>
/**
 * main - has no value
 * Return: 0 after the function ends
*/
int main(void)
{
char c;

c = 'a';
for (c = 'a'; c <= 'z'; c++)
if (c != 'e' && c != 'q')
putchar(c);
putchar('\n');
return (0);
}
