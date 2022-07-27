#include "main.h"
/**
* print_alphabet_x10 - function that prints the alphabet ten times
* Return: 0.
*/

void print_alphabet_x10(void)
{
	int i, x;
	x = 0;
	while (x > 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		x++;
	}
	
	
}

