#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
*main - is the begininh point of our program
*rand - collects the random number
*Return: value is zero
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX  / 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else if (n == 0)
printf("%d is negative\n", n);
return (0);
}
