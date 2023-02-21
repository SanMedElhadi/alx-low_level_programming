/*
 * File: 2-print_alphabet_x10.c
 * Author: Mohammed Elhadi SANNEF <fm_SANNEF@esi.dz>
 */

#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase for 10 times
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);

		_putchar('\n');
	}
}
