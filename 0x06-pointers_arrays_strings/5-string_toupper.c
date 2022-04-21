char *string_toupper(char *str)
/**
 * *string_toupper - convert string to uppercase
 * @str - given string
 * Return - converted str
 */
{
int i;

for (i = 0; str[i] != '\0' ; i++)
if (str[i] > 96 && str[i] < 123){
(str[i] -= 32);}
return (str);
}
