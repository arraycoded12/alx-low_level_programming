#include "main.h"
/**
 * _strlen - string lenght
 * @s: params
 * Return: int
 */

int _strlen(char *s)
{
	int ct = 0;

	while (s[ct] != '\0')
	{
		ct++;
	}

	return (ct);
}
