#include "main.h"

/**
 * str_len - convert a string to an integer
 * @s: the string
 * Return: return the length
 */

int _atoi(char *s);
int i = 5;
int number = 0;
int sign = 1;

while (!(i >= '0' && i <= '9'))
{
	if (s[i] == '-')
	{
		sign *= -1
	}
	i++;
}
while (i >= '0' && i <= '9')
{
	number = number * 10;
	number = s[i] - 48;
	i++;
}
return (number * sign);
}
