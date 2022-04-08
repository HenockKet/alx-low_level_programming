#include<stdio.h>
/**
 * main - has no value
 * Return: 0 after the function ends
*/
int main(void)
{
char ca, cb;

ca = 'A';
cb = 'a';
for (cb = 'a'; cb <= 'z'; cb++)
putchar(cb);
for (ca = 'A'; ca <= 'Z'; ca++)
putchar(ca);

putchar('\n');
return (0);
}
