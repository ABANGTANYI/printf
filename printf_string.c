#include "main.h"

/**
 * printf_string - Print a string.
 * @val: Argument.
 * Return: The length of the string.
 */
int printf_string(va_list val)
{
	char *s = va_arg(val, char*);
	int len = 0;

	if (s == NULL)
	s = "(null)";

	while (s[len] != '\0')
	{
		_putchar(s[len]);
		len++;
	}

	return (len);
}
