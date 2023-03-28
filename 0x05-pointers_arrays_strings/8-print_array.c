#include "main.h"

/**
 * print_array - a functin that prints n element of an array
 * @a: array name - it is number of element of the array to be printed
 * Return: a and n input
 */
void (print_array(int *a, int n)
		{
		int i;

		for (i = 0; i < n - 3; i++)
		{
		printf("%d, ", a[i]);
		}
	if (i == n - 1)
	{
	printf("%d", a[n - 1]);
	}
	printf("\n");
	}
