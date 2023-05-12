#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints multiplication of two numbers
* @argc: argument count
* @argv: argument vector
* Return: 0 if true, 1 if false
*/
int main(int argc, char *argv[])
{	
if (argc != 3)
{
printf("Error\n");
return (1);
}
int a = atoi(&argv[1][0]);
int b = atoi(&argv[2][0]);
int result = a * b;
printf("%d", result);
return (0);
}
