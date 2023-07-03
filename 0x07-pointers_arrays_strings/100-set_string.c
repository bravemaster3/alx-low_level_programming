#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to a pointer value to be changed to a char
 * @to: pointer to the value that *s should point to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
