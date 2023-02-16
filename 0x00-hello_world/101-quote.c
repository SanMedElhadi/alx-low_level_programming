/*
 * File: 101-quote.c
 * Auth: Mohammed Elhadi SANNEF <fm_SANNEF@esi.dz>
 */

#include <unistd.h>

/**
 * main - Prints a value to standard error.
 *
 * Return: Always 1.
 */
int main(void)
{
	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      59);

	return (1);
}
