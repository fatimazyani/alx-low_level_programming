#include "main.h"
/**
 * print numbers - a function that prints the numbers from à to 9
 * Return: 0-9 followed by newline
 */
void print_numbers(void)
{
	int i;

	for (i = 0, i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
