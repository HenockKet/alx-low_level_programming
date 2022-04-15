#include <ctype.h>

int _isupper(int i)
{
char c;

if ( c <= 'A' && c >= 'Z')
	i = 1;
else
	i = 0;

return (i);
}
