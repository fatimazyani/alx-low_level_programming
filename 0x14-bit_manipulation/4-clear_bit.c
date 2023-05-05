#include "main.h"
/**
 * set_b - at a given index will sets the value of a bit to 1 .
 * @n: the Number to convert.
 * @index:   the index, starting from 0 of the bit you want to get.
 * Return: if correct will return the value of the bit at index index or -1 if an error occured.
 */
int set_b(unsigned long int *n, unsigned int index)
{
	unsigned long int a = 1;

	if (index > 64)
		return (-1);
	*n = a << index | *n;
	return (1);
}
/**
 * clear_bit - at a given index will sets the value of a bit to 0 .
 * @n: the Number to convert.
 * @index:   the index, starting from 0 of the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = ULONG_MAX - 1;
	unsigned int i;

	if (index > 64)
		return (-1);
	for (i = 0; i < index; i++)
	{
		a = a << 1;
		set_b(&a, 0);
	}
	*n = a & *n;
	return (1);
}
