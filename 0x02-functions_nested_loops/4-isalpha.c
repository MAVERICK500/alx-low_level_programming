#include "main.h"

/**
* _isalpha - checks for alphabetic character..
*@c: the character being checked
*
*Return: 1 when it is and 0 when it is not.
*/
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 123))
		return (1);
	else
		return (0);
}

