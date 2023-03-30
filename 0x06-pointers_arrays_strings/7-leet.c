#include "main.h"
/**
 * leet - function that encodes a string into 1337.
 * letters a and A are replace by 4
 * letters e and E are replace by 3
 * letters o and O are replace by 0
 * letters t and T are replace by 7
 * letters l and L are replace by 1
 * @s: pointer to string.
 *
 * Return: pinter to s.
 */
 char *leet(char *s)
{
	int string_length, leetCount;
	char leetLetter[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

	/* scan through string */
	string_length = 0;
	while (s[string_length] != '\0')
		/*check whether leetletters is found */
	{
		leetCount = 0;
		while (leetCount < 10)
		{
			if (leetLetter[leetCount] == s[string_length])
			{
				s[string_length] = leetNums[leetCount];
			}
			leetCount++;
		}
		string_length++;
	}
	return (s);
}

