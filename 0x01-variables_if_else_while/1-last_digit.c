#include <stdio.h>
#include <ctype.h>
/**
 * Main - Entry point
 * Return - always success
 * */
int main(void)
{
	int lowerCase = 'a';
	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase += 1;
	}
	putchar('\n');
	return (0);
}
