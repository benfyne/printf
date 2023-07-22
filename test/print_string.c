#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * print_string - prints a string to stdout
 * @s: the string to print
 * Return: the number of characters printed
 */
int print_string(char *s)
{
	int i = 0;
	if (s == NULL)
		s = "(null)";
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
