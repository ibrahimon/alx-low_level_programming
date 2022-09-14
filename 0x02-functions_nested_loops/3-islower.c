#include "main.h"


/**
 * _islower - check for lowercase
 * @c: contains value to be compared
 * Description: function that checks for lowercase character. 
 * Return: 0
 */


int _islower(int c)

{


	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}


	else
	{
		return (0);
	}


}
