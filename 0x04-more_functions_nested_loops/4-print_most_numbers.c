/*
 * File: 4-print_most_numbers.c
 * Author: Mohammed Elhadi SANNEF <fm_SANNEF@esi.dz>
 */
#include "main.h"

/**
 * print_most_numbers - print all numbers from 0 to 9 except 2,4.
 */
void print_most_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
		if (ch != '2' && ch != '4')
			_putchar(ch);
	_putchar('\n');
}
