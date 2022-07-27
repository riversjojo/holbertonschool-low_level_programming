#include "main.h"
/**
* print_sign - function that prints sign of a number
* @n: variable used
* Return: 1, 0 or -1.
*/ 

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);	
	return (1);
	}
	else if (n < 0)
	{
	return (-1);
	}
	else
	return(0);


}
