/*
 * File: 1-alphabet.c
 * Author: Mohammed Elhadi SANNEF <fm_SANNEF@esi.dz>
 */

#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');
}
