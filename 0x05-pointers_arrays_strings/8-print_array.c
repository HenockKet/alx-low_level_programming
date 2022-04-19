#include <stdio.h>
/**
 * print_array - prints elements of an array
 * @a: given elemnts
 * @n: number of elemnts
 * Return: void
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i <= n - 1;)
{
printf("%d", a[i]);
i++;
if (i < n)
printf(", ");
}
printf("\n");
}
