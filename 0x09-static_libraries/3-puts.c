#include "main.h"

/**
 * _puts - prints a string
 * @str: string to be prinnted
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
