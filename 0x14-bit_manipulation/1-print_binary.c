#include "main.h"
/**
 * print_binary - will prints the binary representation of a number.
 * @n: a Number to convert.
 */
void print_binary(unsigned long int n)
{
	unsigned long int i, c = 1, flag = 0, p, b;

	if (n == 0)
	{
		_putchar(48);
		return;
	}
	for (i = 0; i < 64; i++)
	{
		p = ((c << (63 - i)) & n);
		if (p >> (63 - i))
			flag = 1;
		if (flag != 0)
		{
			b = p >> (63 - i);
			_putchar(b + 48);
		}
	}
}
