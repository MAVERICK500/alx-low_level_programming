#include "main.h"

/**
*main - prints the word _putchar
*
*Return: 0 on success execution.
*/

void print_alphabet(void);
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

