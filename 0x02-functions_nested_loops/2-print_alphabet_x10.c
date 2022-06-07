#include "main.h"
/**
 * print_alphabet_x10 - print the alphabets times 10
 * Description: print the alphabet ten times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char n;
	int i = 1;

	while (i < = 10)
	{
		n = 'a';
		while (n < = 'z')
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
		i++;
	}
}
