#include <limits.h>
#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = print_sign(INT_MIN);
	if (r < 0)
		r *= -1;
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
