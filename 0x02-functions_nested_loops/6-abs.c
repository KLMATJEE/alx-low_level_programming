#include "main.h"

/**
 * _abs - Computes the absolute value
 * of the integer.
 *
 * @i: input number as integer.
 *
 * Return: absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else 
	{
		return (i * -1);
	}
}
