#include "main.h"

/**
* print_sign - Prints the sign of a number
* @n: an integer for which we want to check the sign
* Description: Prints 0 when the number is 0, + when it is greater...
* Return: 1 for positive, 0 for 0 and -1 for negative
*/

int print_sign(int n)
{
	int ret, sign;

	if (n > 0)
	{
		ret = 1;
		sign = '+';
	}
	else if (n == 0)
	{
		ret = 0;
		sign = '0';
	}
	else
	{
		ret = -1;
		sign = '-';
	}
	_putchar(sign);
	return (ret);
}
