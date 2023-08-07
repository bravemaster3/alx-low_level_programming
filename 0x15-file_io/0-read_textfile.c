#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - reads letters number of chars from file
 * @filename: filename string
 * @letters: number of letters to read and print
 * Return: the number of chars read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t nchar = 0;
	int filedescr;
	char *buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);
	if (filename == NULL)
	{
		free(buff);
		return (0);
	}
	filedescr = open(filename, O_RDONLY);

	nchar = read(filedescr, buff, letters);
	if (nchar > 0)
		nchar = write(STDOUT_FILENO, buff, nchar);
	close(filedescr);
	free(buff);
	return ((ssize_t)nchar);
}
