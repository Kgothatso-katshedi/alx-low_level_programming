#include "main"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 *  Return: Always 0 (Succes)
 */
void print_alphabet(void)
{
	char k;
	
	for (k = 'a'; k <= 'z'; k++)
	{
		_putchar(k);
	}	
	_putchar('\n');
}