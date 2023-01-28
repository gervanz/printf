#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* ------------------------- PRINT CHAR ------------------------- */
/**
 * print_chr - Prints a char
 * @c: character to print
 * Return: Always 1 (Success)
 */
int print_chr(va_list c)
{
	char character = (char)va_arg(c, int);

	_putchar(character);
	return (1);
}

/* ------------------------- PRINT STR ------------------------- */
/**
 * print_str - Prints a string
 * @s: string to print
 * Return: i
 */
int print_str(va_list s)
{
	char *str = va_arg(s, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";
	while (str[i])
		_putchar(str[i++]);
	return (i);
}

/* ------------------------- PRINT % ------------------------- */


/* ------------------------- PRINT DECIMAL ------------------------- */
/**
 * print_dec - A function that prints a decimal base 10
 * @i: base 10 integer to print
 * Return: number of printed digits
 */
int print_dec(va_list i)
{
	int a[10];
	int j = 1, m = 1000000000, n, sum = 0, counter = 0;

	n = va_arg(i, int);
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
		counter++;
	}
	a[0] = n / m;

	for (; j < 10; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}

	for (j = 0; j < 10; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + a[j]);
			counter++;
		}
	}
	return (counter);
}

/* ------------------------- PRINT INTEGER ------------------------- */
/**
 * print_int - A function that prints a base 10 integer
 * @i: integer to print
 * Return: number of printed digits
 */
int print_int(va_list i)
{
	int a[10];
	int j = 1, m = 1000000000, n, sum = 0, counter = 0;

	n = va_arg(i, int);
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
		counter++;
	}
	a[0] = n / m;

	for (; j < 10; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}

	for (j = 0; j < 10; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + a[j]);
			counter++;
		}
	}
	return (counter);
}
