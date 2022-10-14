#include <stdio.h>
/**
* main - act as the beginning point of the program that
*prints all possible combinations of single-digit numbers
* Return: Always 0 (Success)
*/
int main(void)
{
int r;
for (r = 48; r < 58; r++)
{
putchar(r);
if (r != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
