#include <stdlib.h>

#include <time.h>

/* more headers goes there */

#include <stdio.h>

/* betty style doc for function main goes there */

/**
* main - printing the last digit of the random
*
* number stored in the variable n
*
* Return: Always 0 (Success)
*
*/
int main(void)

{

	int n;

	int last_digit;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	/* your code goes there */

	if (last_digit > 5)

	{

		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);

	}

	else if (last_digit == 0)

	{

		printf("Last digit of %d is %d and is 0\n", n, last_digit);

	}

	else if (last_digit < 6 && last_digit != 0)

	{

		printf("Last digit of %d is %d and is less than 6 and 0\n", n, last_digit);

	}

	return (0);

}
