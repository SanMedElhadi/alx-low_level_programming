/*
 * File: 101-print_number.c
 * Author: Mohammed Elhadi SANNEF <fm_SANNEF@esi.dz>
 */
#include "main.h"

/**
 * print_number - print an integer
 * @n: the integer
 *
 * Return: Always 0
 */
void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		n *= -1;
		k = n;
		_putchar('-');
	}

	k /= 10;

	if (k != 0)
		print_number(k);

	_putchar((unsigned int) n % 10 + '0');
}
