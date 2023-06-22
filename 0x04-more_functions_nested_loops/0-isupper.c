#include "main.h"

/**
* _isupper - checks for uppercase character
* @c: character whose status to check
* Return: 1 if uppercase, 0 otherwise
*/

int _isupper(int c)
{
	int ret = 0;

	if (c >= 65 && c <= 90)
		ret = 1;
	return (ret);
}
