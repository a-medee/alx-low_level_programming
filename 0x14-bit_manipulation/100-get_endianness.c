#include "main.h"

/**
 * get_endianness - check the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int i = 1;
	char *p = (char *)&i;

	if (p[0] == 1)
		return (1);

	return (0);
}
