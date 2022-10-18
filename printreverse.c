#include "main.h"
/**
 * printreverse - prints characters in reverse
 * @word: characters being printed
 *
 * Return: count
 */
int printreverse(char *word)
{
	int i;
	int count = 0;

	for (i = 0; word[i] != '\0'; i++)
		;
	i--;
/*
 *	for (i; i >= 0; i--)
 *	{
 *		_putchar(word[i]);
 *		count++;
 *	}
 */
	while (i >= 0)
	{
		_putchar(word[i]);
		count++;
		i--;
	}
	return (count);
}
