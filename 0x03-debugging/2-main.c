#include <stdio.h>
#include "main.h"

/**
* largest - prints the largest of 3 integers
* Return: 0
*/

int largest_nmuber(void)
{
int a, b, c;
int largest;
a = 972;
b = -98;
c = 0;
largest = largest_number(a, b, c);
printf("%d is the largest number\n", largest);
return (0);
}
