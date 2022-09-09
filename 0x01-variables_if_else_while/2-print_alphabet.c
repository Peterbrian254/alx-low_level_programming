#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (success/correct)
 */
int main(void)
{
	char l;
	
	l = 'a';
	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
