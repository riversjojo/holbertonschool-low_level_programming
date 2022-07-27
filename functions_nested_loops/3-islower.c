#include "main.h"
/**
* main - function that checks for lowercase characters
* Return: 0.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);


}
