#include "main.h"
#include <stdarg.h>

/**
 * check_format - Checks for valid format specifier
 * @format: Possible valid format specifier
 * Return: Pointer to valid function or NULL
 */
int (*check_format(const char *format))(va_list)
{
	int i = 0;
	print_t p[] = {
		{"c", print_chr},
		{"s", print_str},
		{"d", print_dec},
		{"i", print_int},
		{NULL, NULL}
	};

	for (; p[i].t != NULL; i++)
	{
		if (*(p[i].t) == *format)
			break;
	}
	return (p[i].f);
}
