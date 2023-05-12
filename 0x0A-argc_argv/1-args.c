#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: count aarguments
 * @argv: arguments passed
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%i\n", argc - 1);
return (0);
}
