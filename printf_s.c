#include "main.h"
/**
 * printf_string - print a string
 * @val: argument
 * Return: the lenght of the string.
 */

int printf_string(va_list val)
{
	char *str;
	int i;
	int length;

	str = va_arg(val, cahr *);
	if (str == NULL)
	{
		str = "(null)";
		lenth = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
}
