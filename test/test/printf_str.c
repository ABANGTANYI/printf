#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Type char pointer.
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
	;

	return (c);
}

/**
 * _strlenc - Returns the length of a constant string.
 * @s: Type constant char pointer.
 * Return: Length of the string.
 */
int _strlenc(const char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
	;

	return (c);
}
