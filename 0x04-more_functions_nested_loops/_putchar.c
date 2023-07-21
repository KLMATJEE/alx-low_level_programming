#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character has to print
 *
 * Return: On success 1.
 * Upon error , -1 is returned, and error is set upon request
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
