#include "main.h"
/**
 * printfchar - prints a char
 * @val: arguments.
 * Return: 1.
 */
int prinfchar(va_list val)
{
	char str;
	str = va_arg(val, int)
	_putchar(str);
	return (1);
}
