/*
 * File : 5-print_numbers.c
 * Author : Mohammed Elhadi SANNEF <fm_SANNEF@esi.dz>
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all digits of base 10.
 *
 * Return: Always 0
 */
int main(void)
{
	int a = 0;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}
	printf("\n");
	return (0);
}
