#include "main.h"

/**
 * factorial - a function which returns the factorial of a number
 * @n: the given number
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
