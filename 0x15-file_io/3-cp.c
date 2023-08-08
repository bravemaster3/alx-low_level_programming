#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: double pointer to argument list
 * Return: 0 on success, -1 on failure
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buff[BUFF_SIZE];
	ssize_t byt_rd, byt_wr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, USAGE_ERR);
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_from_to(argv[1], 0);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_EXCL, 0664);
	if (fd_to == -1)
	{
		fd_to = open(argv[2], O_WRONLY | O_TRUNC);
		if (fd_to == -1)
		{
			/* error_close(fd_from); IMPORTANT*/
			error_from_to(argv[2], 1);
		}
	}
	while ((byt_rd = read(fd_from, buff, BUFF_SIZE)) > 0)
	{
		/*if (dprintf(fd_to, "%.*s", (int)byt_rd, buff) < 0)*/
		byt_wr = write(fd_to, buff, byt_rd);
		if (byt_wr == -1)
			error_from_to(argv[2], 1);
	}
	if (byt_rd == -1)
		error_from_to(argv[1], 0);
	error_close(fd_from);
	error_close(fd_to);
	return (0);
}

/**
 * error_from_to - prints dynamic error to stderr
 * @filename: filename string
 * @type: 0 for from, 1 for for to/ write
 * Return: no return
 */
void error_from_to(char *filename, int type)
{
	if (type == 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
 * error_close - prints dynamic error to stderr
 * @filedescr: file descriptor
 * Return: no return
 */
void error_close(int filedescr)
{
	int check;

	check = close(filedescr);
	if (check == -1)
	{
		dprintf(STDERR_FILENO, CLOSE_ERR "%d\n", filedescr);
		exit(100);
	}
}
