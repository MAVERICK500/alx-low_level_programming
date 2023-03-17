#include <unistd.h>
/**
*main-Prints out the last part of a quote in the standard error.
*
*Retun: 1 if success.
*/
int main(void)
{
	write(2,
			"and that piece of art is useful\" - Dora Korpar, 2015-10-9\n", 
			59);
	return (1);
}
