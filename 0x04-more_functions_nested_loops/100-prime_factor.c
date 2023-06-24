#include <math.h>
#include <stdio.h>

/**
 * main - Entry point, prints largest prime factor
 *
 * Return: 0
 */

int main(void)
{
	long int val = 612852475143, max = -1, i;

	while (val % 2 == 0)
	{
		max = 2;
		val /= 2;
	}
	for (i = 3; i <= sqrt(val); i += 2)
	{
		while (val % i == 0)
		{
			max = i;
			val /= i;
		}
	}
	if (val > 2)
		max = val;
	printf("%ld\n", max);

	return (0);
}
