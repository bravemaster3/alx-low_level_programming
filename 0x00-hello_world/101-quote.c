#include <stdio.h>
#include <string.h>
/**
*main - Entry point
*This uses a non-common fonction to write to the stderr
*Return: 1 in this case
*/
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	fwrite(str, sizeof(char), strlen(str), stderr);
	return (1);
}
