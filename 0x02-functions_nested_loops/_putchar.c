#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

