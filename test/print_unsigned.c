#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * print_unsigned - prints an unsigned integer to stdout
 * @n: the unsigned integer to print
 * Return: the number of characters printed
 */
int print_unsigned(unsigned int n)
{
	int count = 0;

	if (n / 10)
		count += print_unsigned_int(n / 10);
	count += _putchar((n % 10) + '0');
	return (count);
}
