#include "main.h"
/**
 * print_sign - Prints the sign of the numbers
 * @n: the number of which the sign will be printed
 *
 * Return: 1 if the number is grester than 1 , 0 when equals to zero otherwise -1
 */
int print_sign(int n)
{
	if (n > 0)	
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
