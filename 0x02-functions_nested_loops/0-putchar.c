#include "main.h"

/**
*main - prints the word _putchar
*
*Return: 0 on success execution.
*/

int main(void)
{
	char name[8]  = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(name[i]);
	}
	_putchar('\n');
	return (0);
}
