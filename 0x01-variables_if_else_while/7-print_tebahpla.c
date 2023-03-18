#include <stdio.h>
/**
 * main - prints the lowerCase alphabet in reverse
 * Retun: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'z'; letter--)
		putchar(letter);

	putchar('\n');
	return (0);
}
