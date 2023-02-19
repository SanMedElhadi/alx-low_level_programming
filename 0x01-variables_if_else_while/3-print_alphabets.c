/*
 * File : 3-print_alphabets.c
 * Author : Mohammed Elhadi SANNEF <fm_SANNEF@esi.dz>
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all alphabet in uppercase
 *
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
