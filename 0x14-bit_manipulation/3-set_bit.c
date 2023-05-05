#include "main.h"
/**
 * set_bit - at a given index will sets the value of a bit to 1 .
 * @n: the Number to convert.
 * @index:  the index, starting from 0 of the bit you want to get.
 * Return: will returns -1 if an error occured
 * or the value of the bit at index index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = 1;

	if (index > 64)
		return (-1);
	*n = a << index | *n;
	return (1);
}
