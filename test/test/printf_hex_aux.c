#include "main.h"

/**
 * printf_hex_aux - prints a hexadecimal number.
 * @num: argument.
 * Return: counter.
 */
int printf_hex_aux(unsigned long int num)
{
	long int i;
	long int *array;
	long int counter = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
	num /= 16;
	counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));

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
	return (counter);
}
