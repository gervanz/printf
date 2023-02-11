#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* ------------------------- PRINT ADDRESS ------------------------- */
/**
 * print_ptr - Prints an address
 * @p: address to print
 * Return: number of printed characters
 */
int print_ptr(va_list p)
{
	int counter = 0;
	unsigned int a[16];
	unsigned int i = 0, sum = 0;
	unsigned long n, m = 1152921504606846976;
	char *str = "(nil)";

	n = va_arg(p, unsigned long);
	if (n == 0)
	{
		for (; str[i]; i++)
		{
			_putchar(str[i]);
			counter++;
		}
		return (counter);
	}
	_putchar('0');
	_putchar('x');
	counter = 2;

	a[0] = n / m;
	for (i = 1; i < 16; i++)
	{
		m /= 16;
		a[i] = (n / m) % 16;
	}
	for (i = 0; i < 16; i++)
	{
		sum += a[i];
		if (sum || i == 15)
		{
			if (a[i] < 10)
				_putchar('0' + a[i]);
			else
				_putchar('0' + ('a' - ':') + a[i]);
			counter++;
		}
	}
	return (counter);
}

/* ------------------------- PRINT REVERSED ------------------------- */
/**
 * print_rev - Prints a string in reverse
 * @r: string to print
 * Return: number of printed characters
 */
int print_rev(va_list r)
{
	char *str;
	int i = 0, counter = 0;

	str = va_arg(r, char *);
	if (str == NULL)
		str = ")llun(";
	while (str[i])
		i++;
	for (i -= 1; i >= 0; i--)
	{
		_putchar(str[i]);
		counter++;
	}
	return (counter);
}

/* ------------------------- PRINT ROT13------------------------- */
/**
 * print_rot - A function that prints a string in rot13 format
 * @R: string to print
 * Return: number of printed characters
 */
int print_rot(va_list R)
{
	char *str;
	unsigned int i = 0, j = 0;
	int counter = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(R, char *);
	if (str == NULL)
		str = "(ahyy)";
	for (; str[i]; i++)
	{
		for (j = 0; in[j]; j++)
		{
			if (in[j] == str[i])
			{
				_putchar(out[j]);
				counter++;
				break;
			}
		}
		if (!in[j])
		{
			_putchar(str[i]);
			counter++;
		}
	}
	return (counter);
}

/* ------------------------- PRINT NON-PRINTABLE ------------------------- */
/**
 * print_sym - A function that prints a string and nonprintable
 * character ascii values
 * @S: string to print
 * Return: number of printed characters
 */
int print_sym(va_list S)
{
	unsigned int i = 0;
	int counter = 0;
	char *str = va_arg(S, char *);

	if (str == NULL)
		str = "(null)";
	for (; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			counter += 2;
			counter += print_hex(S);
		}
		else
		{
			_putchar(str[i]);
			counter++;
		}
	}
	return (counter);
