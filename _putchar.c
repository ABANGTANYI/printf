#include "main.h"

/**
 * _putchar - writes the character c to stdout
<<<<<<< HEAD
 * @c: The character to printt
 *
 * Return: On success 1.
 * On error , -1 is returned, and error is set appropriately.
=======
 * @c: The character to print
 *
 * Return: on succes 1.
 * on error, -1 is returned. and errno is set appropriately.
>>>>>>> aa4aae8724cdc89b7528606341bff4ca5d81511b
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
