#include<stdio.h>
/**
 * main - doesn't return anyvalue
 * Return: 0 after the sizes are printed
 */
int main(void)
{
int intType;
float floatType;
double doubleType;
char charType;

printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n)", sizeof(longType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(doubleType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
