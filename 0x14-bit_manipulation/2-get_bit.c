#include "main.h"
/**
 * get_bit - Function that returns the value of a bit at a given index.
 * @n: Number to convert.
 * @index:  is the index, starting from 0 of the bit you want to get.
 * Return: the value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	n = n >> index;
	n = n & 1;
	return (n);
}
