#include "main.h"

/**
 * _isupper - uppercase letters
 * 
 * @c: character to check
 * Description: define if a character is a number
 * Return: 1 yes 0 no
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
