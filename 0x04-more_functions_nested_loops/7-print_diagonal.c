/*
 * File: 7-print_diagonal.c
 * Author : Mohammed Elhadi SANNEF <fm_SANNEF@esi.dz>
 */
#include "main.h"

/**
 * print_diagonal - prints a diagonal line of length n.
 * @n : length of the diagonal line.
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			if (i < n - 1)
				_putchar('\n');
		}
	_putchar('\n');
}
