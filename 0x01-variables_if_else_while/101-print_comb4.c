#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints all possible combinations of three digits
 * Return: 0
 */
int main(void)
{
	int e = 0;
	int c;
	int d;

	while (e < 10)
	{
		d = 0;
		while (d < 10)
		{
			c = 0;
			while (c < 10)
			{
				if (c != d && d != e && e < d && d < c)
				{
					putchar('0' + e);
					putchar('0' + d);
					putchar('0' + c);

					if (c + d + e != 9 +8 +7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			d++;
		
		}
		e++;
	}

	putchar('\n');
	return (0);
}