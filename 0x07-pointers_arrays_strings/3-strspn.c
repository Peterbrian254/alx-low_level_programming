#include "main.h"

/**
 * _strspn - function 
 * @s: first string
 * @accept: second string
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] ; i++)
	{
		for (j = 0; accept [j] ; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (!accept [j])
			break;
	}
	return (i);
}
