#include<stdio.h>
/**
 * main - has no value
 * Return: 0
*/
int main(void)
{
int n1, n2;
int c1 = 0;
int c2 = 0;

n1 = 48;
while (n1 < 58)
{
n2 = n1 + 1;
while (n2 < 58)
{
putchar(c1);
putchar(c2);
putchar(n1);
putchar(n2);
n2++;
c1 = ',';
c2 = ' ';
}
n1++;
}

return (0);
}
