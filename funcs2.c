#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* ------------------------- PRINT BINARY ------------------------- */
/**
 * print_bin - Prints an unsigned integer in binary notation
 * @b: unsigned in to print
 * Return: number of printed digits
 */
int print_bin(va_list b)
{
	unsigned int n, m = 2147483648, j = 1, sum = 0;
	unsigned int a[32];
	int counter = 0;

	n = va_arg(b, unsigned int);
	a[0] = n / m;

	for (; j < 32; j++)
	{
		m /= 2;
		a[j] = (n / m) % 2;
	}
	for (j = 0; j < 32; j++)
	{
		sum += a[j];
		if (sum || j == 31)
		{
			_putchar('0' + a[j]);
			counter++;
		}
	}
	return (counter);
}

/* ------------------------- PRINT UNSIGNED ------------------------- */
/**
 * print_unsgnd - Prints an unsigned integer
 * @u: unsigned int to print
 * Return: number of printed digits
 */
int print_unsgnd(va_list u)
{
	unsigned int a[10];
	unsigned int j = 1, m = 1000000000, n, sum = 0;
	int counter = 0;

	n = va_arg(u, unsigned int);
	a[0] = n / m;
	for (; j < 10; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}
	for (j = 0; j < 10; j++)
	{
		sum += a[j];
		if (sum || j == 9)
		{
			_putchar('0' + a[j]);
			counter++;
		}
	}
	return (counter);
}

/* ------------------------- PRINT OCTAL ------------------------- */
/**
 * print_oct - Prints an unsigned integer in octal notation
 * @o: unsigned int to print
 * Return: number of printed digits
 */
int print_oct(va_list o)
{
	unsigned int a[11];
	unsigned int j = 1, m = 1073741824, n, sum = 0;
	int counter;

	n = va_arg(o, unsigned int);
	a[0] = n / m;
	for (; j < 11; j++)
	{
		m /= 8;
		a[j] = (n / m) % 8;
	}
	for (j = 0; j < 11; j++)
	{
		sum += a[j];
		if (sum || j == 10)
		{
			_putchar('0' + a[j]);
			counter++;
		}
	}
	return (counter);
}

/* ------------------------- PRINT hex ------------------------- */
/**
 * print_hex - Prints an ascii character value in lowercase hexadecimal
 * @x: char to print
 * Return: number of printed characters
 */
int print_hex(va_list x)
{
	unsigned int a[8];
	unsigned int j = 1, m = 268435456, n, sum = 0;
	char diff;
	int counter = 0;

	n = va_arg(x, unsigned int);
	diff = 'a' - ':';
	a[0] = n / m;
	for (; j < 8; j++)
	{
		m /= 16;
		a[j] = (n / m) % 16;
	}
	for (j = 0; j < 8; j++)
	{
		sum += a[j];
		if (sum || j == 7)
		{
			if (a[j] < 10)
				_putchar('0' + a[j]);
			else
				_putchar('0' + diff + a[j]);
			counter++;
		}
	}
	return (counter);
}

/* ------------------------- PRINT HEX ------------------------- */
/**
 * print_HEX - Prints an ascii character value in uppercase hexadecimal
 * @X: char to print
 * Return: number of printed characters
 */
int print_HEX(va_list X)
{
	unsigned int a[8];
	unsigned int j = 1, m = 268435456, n, sum = 0;
	char diff;
	int counter;

	n = va_arg(X, unsigned int);
	diff = 'A' - ':';
	a[0] = n / m;
	for (; j < 8; j++)
	{
		m /= 16;
		a[j] = (n / m) % 16;
	}
	for (j = 0; j < 8; j++)
	{
		sum += a[j];
		if (sum || j == 7)
		{
			if (a[j] < 10)
				_putchar('0' + a[j]);
			else
				_putchar('0' + diff + a[j]);
			counter++;
		}
	}
	return (counter);
}
