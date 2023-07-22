#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * print_octal - prints an unsigned integer in octal base to stdout
 * @n: the unsigned integer to print
 * Return: the number of characters printed
 */
int print_octal(unsigned int n)
{
	int count = 0;

	if (n / 8)
		count += print_octal(n / 8);
	count += _putchar((n % 8) + '0');
	return (count);
}
