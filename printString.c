#include "main.h"

/**
 * printString - function that prints string
 * @word: string to be printed
 *
 * Return: count
 */

int printString(char *word)
{
	int count = 0;
	int i;

	for (i = 0; word[i] != '\0'; i++)
	{
		if ((word[i] >= 127) || ((word[i] > 0) && (word[i] < 32)))
		{
			_putchar(92);
			_putchar('x');
			_putchar(word[i]);
		}
		else
		{
			_putchar(word[i]);
			count++;

		}
	}
	return (count);
}
