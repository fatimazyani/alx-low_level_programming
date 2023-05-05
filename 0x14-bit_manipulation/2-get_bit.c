#include "main.h"
/**
 * get_bit - will returns at a given index the value of a bit .
 * @n:   the Number to convert.
 * @index:  the index, starting from 0 of the bit you want to get.
 * Return: will return -1 if an error occured
 *or the value of the bit at the index .
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	n = n >> index;
	n = n & 1;
	return (n);
}
