#include "main.h"
/**
 * _isalpha - Checks if the letter is uppercase.
 * @c: The character to be used.
 *
 * Return: 1 if uppercase, otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
