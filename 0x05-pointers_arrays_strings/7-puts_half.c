#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, j;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}

	if (count % 2 == 0)
	{
		for (j = count / 2; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
		_putchar('\n');
	}
	else
	{
		for (j = ((count - 1) / 2) + 1; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
		_putchar('\n');
	}
}
