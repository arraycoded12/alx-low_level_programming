#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: params
 * Return: something
 */
int _atoi(char *s)
{
	unsigned int ct = 0, size = 0, j = 0, k = 1, m = 1, i;

	while (*(s + ct) != '\0')
	{
		if (size > 0 && (*(s + ct) < '0' || *(s + ct) > '9'))
			break;

		if (*(s + ct) == '-')
			k *= -1;

		if ((*(s + ct) >= '0') && (*(s + ct) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		ct++;
	}

	for (i = ct - size; i < ct; i++)
	{
		j = j + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (j * k);
}
