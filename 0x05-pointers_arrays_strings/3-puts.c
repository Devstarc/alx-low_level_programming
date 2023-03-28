#include <main.h>
/**
 * _puts - prints a strin, follwed by a new line, to stdou
 * t
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
