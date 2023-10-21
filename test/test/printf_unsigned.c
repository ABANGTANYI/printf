#include "main.h"

/**
 * printf_unsigned - Prints an unsigned integer.
 * @args: Argument to print.
 * Return: Number of characters printed.
 */
int printf_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int num = n;
	int digit, exp = 1;
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
	while (num / 10 != 0)
	{
		exp *= 10;
		num /= 10;
	}

	num = n;

	while (exp != 0)
	{
		digit = num / exp;
		_putchar(digit + '0');
		num %= exp;
		exp /= 10;
		count++;
	}
	}

	return (count);
}
