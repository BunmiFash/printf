#include "main.h"
/**
 * check_next - function that checks next character
 * @c: character to be checked
 *
 * Return: 0
 */

int check_next(char c)
{
	int i;

	char array[] = "discobuxRrXS";

	for (i = 0; array[i] != '\0'; i++)
	{
		if (array[i] == c)
			return (1);
	}
	return (0);
}
