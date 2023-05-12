#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds the positive numbers
 * @argc: argument count
 * @argv: array containing command line arguments
 * return: 0 (success)
 */
int main(int argc, char *argv[])
{
int a, b, add = 0;
for (a = 1; a < argc; a++)
{
for (b = 0; argv[a][b] != '\0'; b++)
{
if (!isdigit(argv[a][b]))
{
printf("Error\n");
return (1);
}
}
add += atoi(argv[b]);
}
printf("%d\n", add);
return (0);
}
