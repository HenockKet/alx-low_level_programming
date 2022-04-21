#include "main.h"
#include <stdio.h>

/**
 * sym - determines whether ascii is a symbol
 * @c: character
 * Return: 1 if true, 0 if false
 */
int sym(char c)
{
        int i;
        char sym[] = " \t\n,.!?\"(){}";
for (i = 0; i < 12; i++)
                if (c == sym[i])
                        return (1);
        return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @s: given string
 * Return: string with capitalized words
 */
char *cap_string(char *s)
{
        char *ptr = s;
        int a = 1;
while (*s)
        {
                if (sym(*s))
                        a = 1;
                else if (sym(*s) && a)
                {
                        *s -= 32;
                        a = 0;
                }
                else
                        a = 0;
                s++;
        }
        return (ptr);
}
