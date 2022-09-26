#include "main.h"

/**
 * _strchr - Write a function that locates a character in a string
 * @s: string to perform search
 * @c: char to search
 * Return: char s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
