#include <string.h>
/**
 * _strcmp - copmares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return:0 if strings are equal, greater than 0 if first string is greater and less than 0 if second string is greater.
 */
int _strcmp(char *s1, char *s2)
{
return (*s1 - *s2);
}
