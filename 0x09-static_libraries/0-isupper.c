#include "main.h"
/**
 * _isupper - checks if parameter is uppercase letter
 * @c - input character
 * return; 1 if is an uppercase letter, 0 if otherwise
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
