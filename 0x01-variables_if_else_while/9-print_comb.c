#include <stdio.h>
/**
 * main - prints all posible combinations of single digit number
 * Retun: 0 on success
 */
int main(void)
{
	int i = '0';

	while (1 <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
		putchar(' ');
	}
		++i;
	}
	putchar('\n');
	reture (0);
}

