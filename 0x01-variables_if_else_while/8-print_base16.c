#include <stdio.h>
/**
 * main - print all the numers of base 16 in lowerCase
 * Return: Always 0.
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
	putchar((num % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
	putchar(letter);

	putchar('\n');
	return (0);
}
