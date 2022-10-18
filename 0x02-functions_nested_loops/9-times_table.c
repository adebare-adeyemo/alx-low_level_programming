#include "main.h"

/**
 * times_table - times table function
 *
 */
void times_table(void)
{
	int i;
	int j;
        int times = j * i;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 0)
			{
				_putchar('0');
			} else if (times <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(times + '0');
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(times / 10 + '0');
				_putchar(times % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
