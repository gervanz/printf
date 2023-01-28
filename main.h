#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stdio.h>

/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

int _printf(const char *format, ...);
int (*check_format(const char *format))(va_list);
int _putchar(char c);
int print_chr(va_list c);
int print_str(va_list s);
int print_perc();
int print_dec(va_list i);
int print_int(va_list i);

#endif  /* _MAIN_H */
