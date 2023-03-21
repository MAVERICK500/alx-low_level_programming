#include "main.h"

/**
*print_alphabet_x10 - print 10 times alphabet
*
*Return: 0 on success execution.
*/

void print_alphabet_x10(void)
 {
 	int line;

 	for (line = 0; line <= 9; line++)
 	{
 		char letter = 'a';

 		while (letter != 'z' + 1)
 		{	
 		{
 			_putchar(letter);
 			letter++;
 		}
 		_putchar('\n');
 	}
 }
}
