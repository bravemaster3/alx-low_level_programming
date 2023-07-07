#include "main.h"

/**
* _isdigit - checks for a digit
* @c: character whose status to check
* Return: 1 if digit, 0 otherwise
*/

int _isdigit(int c)
{
	int ret = 0;

	if (c >= 48 && c <= 57)
		ret = 1;
	return (ret);
}
