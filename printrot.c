#include "main.h"
/**
 * printrot - prints 13th letter after a character
 * @s: character pointer
 *
 * Return: printed character
 */
int printrot(char *s)
{
	int count = 0, i;
	int print = 0;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int a;

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + count) == alphabet[i])
			{
				*(s + count) = rot13[i];
				break;
			}
		}
		count++;
	}


	for (a = 0; s[a] != '\0'; a++)
		_putchar(s[a]);
	/*print += printstr(s); */
	return (print);
}
