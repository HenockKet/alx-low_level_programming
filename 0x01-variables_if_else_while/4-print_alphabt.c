#include<stdio.h>
/*
 * main - has no value
 * Return: 0 after the function ends
*/
int main(void)
{
char ch;

char c = 'a';
for(ch = 'a'; ch <= 'z'; ch++)
if (ch != 'e' && ch != 'q')
putchar(ch);
putchar('\n');
return (0);
}
