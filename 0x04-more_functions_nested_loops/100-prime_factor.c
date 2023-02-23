/*
 * File: 100-prime_factor.c
 * Author: Mohammed Elhadi SANNEF <fm_SANNEF@esi.dz>
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the largest prime factor of 612852475143.
 *
 * Return: Always 0
 */
int main(void)
{
	long n = 612852475143;
	int factor = 2;

	while (factor <= math.sqrt(n))
	{
		if (n % factor == 0)
			n /= factor;
		else
			factor++;
	}

	printf("%d", n);
	return (0);
}
