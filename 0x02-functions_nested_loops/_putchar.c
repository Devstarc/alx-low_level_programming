#include <unistd.h>
/**
 * _putchar - write the character to stdout
 * @C: The character to print
 * Return: on success 1.
 * On error, -1 is returned, and error is set apprioprietly
 */

 int _putchar(char c)
{
	return (write(1, &c, 1));
}
