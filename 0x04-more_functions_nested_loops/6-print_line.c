#include "main.h"
/**
 * print_line - printing lines
 * @n: number of time
 *
 * Return: Always 0
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
