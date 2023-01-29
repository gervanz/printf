#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stdio.h>

#define UNUSED(x) (void)(x)

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
int print_dec(va_list i);
int print_int(va_list i);
int print_bin(va_list b);
int print_unsgnd(va_list u);
int print_oct(va_list o);
int print_hex(va_list x);
int print_HEX(va_list X);

#endif  /* _MAIN_H */
