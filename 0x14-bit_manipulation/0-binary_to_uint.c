#include "main.h"
/**
 * binary_to_uint - is a function that will converts a binary number to an unsigned integer.
 * @b: a String to convert.
 * Return: the result of the convertion.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 1, num = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		if (b[i] != '1' && b[i] != '0')
			return (0);
	i--;
	for (; i >= 0; i--)
	{
		if (b[i] == '1')
			num = num + a;
		a = a * 2;
	}
	return (num);
}
