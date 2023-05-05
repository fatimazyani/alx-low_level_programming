#include "main.h"
/**
 * get_endianness -  will checks the endianness.
 * Return:  if big endian returns 0,  if little endian returns 1
 */
int get_endianness(void)
{
	int C = 1;

	C = C >> 1;
	if (C != 0)
		return (0);
	return (1);
}
