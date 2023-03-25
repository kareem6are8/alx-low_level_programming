#include "main.h"

/**
 * print_numbers - prints an integer number
 *
 * @n: the integer number we printed
*/

void print_numbers(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putcher('_');
		num = -num;
	}
	if ((num / 10) > 0)
		print_number(num / 10);
	_putcher((num % 10) + 48);
}
