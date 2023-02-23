/*
 * File : 0-isupper.c
 * Author : Mohammed Elhadi SANNEF <fm_SANNEF@esi.dz>
 */
#include "main.h"

/**
 * _isupper - Check if an alphabet is uppercase or not.
 * @c : the caracter to check.
 *
 * Return: 1 When Uppercase, 0 elsewhere.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
