/*
 * File : 6-print_numberz.c
 * Author : Mohammed Elhadi SANNEF <fm_SANNEF@esi.dz>
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all single digits of base 10 (using chars)
 *
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
