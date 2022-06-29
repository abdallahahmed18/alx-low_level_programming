#include <stdio.h>

/**
 * main - prints arguments received
 * @argc: length of arguments
 * @argv: argument passed
 * Return: 0
 */

int main(int argc, char **argv)
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
