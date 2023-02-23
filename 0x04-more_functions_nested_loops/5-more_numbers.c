/*
 * File: 5-more_numbers.c
 * Author: Mohammed Elhadi SANNEF <fm_SANNEF@esi.dz>
 */
#include "main.h"

/**
 * more_numbers - prints all numbers from 0 to 14, 10 times.
 */
void more_numbers(void)
{
	int i;
	int j;
	char ch;
	char limit;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		limit = '9';
		while (j < 2)
		{
			if (j == 1)
				limit = '4';
			for (ch = '0'; ch <= limit; ch++)
			{
				if (j == 1)
					_putchar('1');
				_putchar(ch);
			}
			j++;
		}
		_putchar('\n');
	}
}
