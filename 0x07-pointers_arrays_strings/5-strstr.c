#include "main.h"
#include <string.h>

/**
 * _strstr - finding the first occurrence of the substring
 * @needle: input value
 * @haystack: input value
 * Return: a pointer to the beginning of the selected substring
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
