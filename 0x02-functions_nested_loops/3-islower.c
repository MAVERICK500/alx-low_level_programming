#include "main.h"

/**
* _islower - checks whether a char is lower case.
*@c: the character being checked
*
*Return: 1 when it is and 0 when it is not.
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
