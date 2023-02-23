/*
 * File: 8-print_square.c
 * Author: Mohammed Elhadi SANNEF <fm_SANNEF@esi.dz>
 */
#include "main.h"

/**
 * print_square - print a square using #.
 * @size: size of the square
 *
 * Return: Always 1
 */
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			if (i < size - 1)
				_putchar('\n');
		}
	_putchar('\n');
}
