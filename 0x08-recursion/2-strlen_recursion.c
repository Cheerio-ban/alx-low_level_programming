#include "main.h"

/**
 * _strlen_recursion - finds the length of the string
 * @s: length of the string to be found
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0' )
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
