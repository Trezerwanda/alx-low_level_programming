#include "main.h"
/**
 * is_palindrome - returns 1 if string is palindrome and 0 if not
 *@s: string to reverse
 *Return: 1 if it is a palindrome, 0 if it is not
 */
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate length of
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - checks characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @l: length of string
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int i, int l)
{
if (*(s + i) != *(s + l - 1))
return (0);
if (i >= l)
return (1);
return (check_pal(s, i + 1, l - 1));
}
