#include "main.h"

/**
 * printf_pointer - prints a hexadecimal pointer.
 * @val: arguments.
 * Return: counter.
 */
int printf_pointer(va_list val)
{
	void *p = va_arg(val, void *);
	unsigned long int ptr_value = (unsigned long int)p;
	int counter = 0;

	if (p == NULL)
	{
		char *s = "(nil)";

	while (*s != '\0')
	{
	_putchar(*s);
	s++;
	counter++;
	}
	return (counter);

	}

	_putchar('0');
	_putchar('x');
	counter += 2;

	if (ptr_value == 0)
	{
	_putchar('0');
	counter++;
	}
	else
	{
		counter += printf_hex_aux(ptr_value);
	}

	return (counter);
}
