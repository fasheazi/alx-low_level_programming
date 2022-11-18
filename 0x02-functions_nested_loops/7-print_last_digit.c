#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @i: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int i)
{
	int j;

	j = (i % 10);

	if (j < 0)
	{
		j = (-1 * j);
	}

	_putchar(j + '0');
	return (j);
}
