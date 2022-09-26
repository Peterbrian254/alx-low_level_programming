#include "main.h"

/**
  * _strchr - locate character in string
  * @s: source string
  * @c: character to find
  *
  * Return: the string from character found
  */
char *_strchr(char *s, char c)
{
	while (*s ! = '\0') /* Declaring WHILE */
	{
		if (*s == c) /*if s == c*/
		{
			return (s); /*return s*/
		}

		++s;

	}

	if (*s == c)
	{
		return (s);

	}


	return (0); /*value null*/
}
