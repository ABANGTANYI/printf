#include "main.h"

/**
 * printf_HEX - prints a hexadecimal number.
 * @val: arguments.
 * Return: counter.
 */
int printf_HEX(va_list val)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
	num /= 16;
	counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	if (array == NULL)
	{
	return (-1);
	}

	for (i = 0; i < counter; i++)
	{
	array[i] = temp % 16;
	temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
	if (array[i] > 9)
		_putchar(array[i] + 'A' - 10);
	else
		_putchar(array[i] + '0');
	}

	free(array);
	return counter;
}
