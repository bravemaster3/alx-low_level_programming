#include "main.h"

/**
 *
 *
 *
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *s1 = '\0';

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				s1 = s + i;
				goto end;
			}
		}
	}
	goto end;

end:
	return (s1);
}
