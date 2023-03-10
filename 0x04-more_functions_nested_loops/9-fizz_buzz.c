/*
 * File: 9-fizz_buzz.c
 * Author: Mohammed Elhadi SANNEF <fm_SANNEF@esi.dz>
 */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints numbers from 1 to 100, with add. treatment.
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
