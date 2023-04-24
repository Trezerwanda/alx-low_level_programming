#include <stdio.h>
/**
 * main - print lowercase alphabet in reverse
 * Return: always 0
 */
int main(void)
{
char lr;
for (lr = 'z'; lr >= 'a'; lr--)
putchar(lr);
return (0);
}
