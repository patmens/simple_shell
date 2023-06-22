#include "header.h"

/**
 *_abs - check the absolute vaue of an integer
 * @c: The number to be calculated
 * Return: 0 or absolute value of the number
 */

int _abs(int c)

{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}

