/*
 * File : 4-print_alphabt.c
 * Author : Mohammed Elhadi SANNEF <fm_SANNEF@esi.dz>
 */
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints all alphabet except q and e (lowercase).
 *
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch < 'z'; ch++)
	{
		if ((ch != 'q') && (ch != 'e'))
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
