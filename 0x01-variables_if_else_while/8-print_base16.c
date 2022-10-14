#include <stdio.h>
/**
*main - act as the beginning point
*Return: zero dude
*/
int main(void)
{
int k;
char al;
for (k = 0; k < 16; k++)
{
putchar(k);
}
for (al = 'a'; al <= 'f'; al++)
{
putchar(al);
}
putchar('\n');
return (0);
}
