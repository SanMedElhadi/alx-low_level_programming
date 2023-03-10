/*
 * File : 1-isdigit.c
 * Author : Mohammed Elhadi SANNEF <fm_SANNEF@esi.dz>
 */
#include "main.h"

/**
 * _isdigit - Check if the entered character is a digit.
 * @c : the character to check
 *
 * Return: 1 if digit, 0 elsewhere
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
