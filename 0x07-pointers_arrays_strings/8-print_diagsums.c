#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - unction that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: array of int
 * @size: size of matrix
 * Return: Nothinga
 */
void print_diagsums(int *a, int size)
{
	int i, j, p, l = 0, r = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		l += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - l - j);
		r += *(a + p);
	}
	printf("%i, %i\n", l, r);
}
