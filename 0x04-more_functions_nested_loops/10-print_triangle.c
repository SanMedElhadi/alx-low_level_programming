/*
 * File: 10-print_triangle.c
 * Author: Mohammed Elhadi SANNEF <fm_SANNEF@€si.dz>
 */
#include "main.h"

/**
 * print_triangle - print a triangle with size 'size'.
 * @size: the size of the triangle.
 */
void print_triangle(int size)
{
	int i;

	if (size > 0)
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - 1 - i; j++)
				_putchar(' ');
			for (j = 0; j < i; j++)
				_putchar('#');
			if (i < size - 1)
				_putchar('\n');
		}
	_putchar('\n');
}
