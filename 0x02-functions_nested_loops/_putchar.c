#include <unistd.h>

/**
 * putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * on error, -1 ia returned, and is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
