#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * print_hex - prints an unsigned integer in hexadecimal base to stdout
 * @n: the unsigned integer to print
 * @upper: flag for uppercase or lowercase letters
 * Return: the number of characters printed
 */
int print_hex(unsigned int n, int upper)
{
	int count = 0;
	char hex[16] = "0123456789abcdef";

	if (upper)
		hex[10] = 'A', hex[11] = 'B', hex[12] = 'C',
			hex[13] = 'D', hex[14] = 'E', hex[15] = 'F';
	if (n / 16)
		count += print_hex(n / 16, upper);
	count += _putchar(hex[n % 16]);
	return (count);
}
