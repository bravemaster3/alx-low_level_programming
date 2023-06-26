#include "main.h"

/**
 * rev_string - prints a string in reverse, no newline
 * @s: the pointer variable to the string
 * Return: No return
 */
void rev_string(char *s)
{
	int counter1 = 0, counter2 = 0;
	char c;
	char *s1 = s;

	while (*s1 != '\0')
	{
		counter1++;
		s1++;
	}
	counter1--;
	while (counter1 >= 0 && counter2 < counter1)
	{
		c = *(s + counter2);
		*(s + counter2) = *(s + counter1);
		*(s + counter1) = c;
		counter1--;
		counter2++;
	}
}
