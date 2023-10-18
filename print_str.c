#include "main.h"
/**
<<<<<<< HEAD
 * print_string - print a string.
 * @val: argument.
 * Return: the length of the string.
 */

int printf_string(va_list val)
{
	char *str;
	int i;
	int length;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++);
			_putchar(str[i]);
			return (length);
	}
=======
 * _strlen - returns the length of a string.
 * @str: string pointer
 * Return: 1
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)

		return (i);
}
/**
 * _strlenc - strlen function but applied for constant char pointer str
 * @str: char pointer
 * Return: 1
 */
int _strlenc(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;

	return (i);
>>>>>>> aa4aae8724cdc89b7528606341bff4ca5d81511b
}
