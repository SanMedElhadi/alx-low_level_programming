/*
 * File: 6-print_line.c
 * Author: Mohammed Elhadi SANNEF <fm_SANNEF@esi.dz>
 */
#include "main.h"

/**
 * print_line - print lines based on the entered number
 * @n : number of _ to print.
 */
void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
			_putchar('_');
	_putchar('\n');
}

