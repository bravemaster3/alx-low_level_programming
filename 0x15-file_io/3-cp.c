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
	ssize_t byt_rd;

	if (argc != 3)
	{
		write(STDERR_FILENO, USAGE_ERR, strlen(USAGE_ERR));
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
			error_close(fd_from); /* IMPORTANT*/
			error_from_to(argv[2], 1);
		}
	}
	while ((byt_rd = read(fd_from, buff, BUFF_SIZE)) > 0)
	{
		if (dprintf(fd_to, "%.*s", (int)byt_rd, buff) > 0)
		{
			error_close(fd_from);
			error_close(fd_to);
			error_from_to(argv[2], 1);
		}
	}
	error_close(fd_from);
	error_close(fd_to);
	return (0);
}

/**
 * gen_err - generates error message
 * @filename: filename string
 * @type: 0 for from, 1 for to, 2 for write
 * Return: pointer to the buffer where the error message is stored.
 * Needs to be free'd.
 */
char *gen_err(char *filename, int type)
{
	char *str;
	int len;

	if (filename == NULL)
		return (NULL);
	len = strlen(filename);
	if (type == 0)
		str = malloc(sizeof(char) * (strlen(FROM_ERR) + len + 2));
	if (type == 1)
		str = malloc(sizeof(char) * (strlen(WRITE_ERR) + len + 2));
	if (str == NULL)
		return (NULL);
	strcpy(str, FROM_ERR);
	strcat(str, filename);
	strcat(str, "\n");
	return (str);
}

/**
 * error_from_to - prints dynamic error to stderr
 * @filename: filename string
 * @type: 0 for from, 1 for for to/ write
 * Return: no return
 */
void error_from_to(char *filename, int type)
{
	char *str;

	str = gen_err(filename, type);
	write(STDERR_FILENO, str, strlen(str));
	free(str);
	if (type == 0)
		exit(98);
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
		write(STDOUT_FILENO, CLOSE_ERR, strlen(CLOSE_ERR));
		write(STDOUT_FILENO, &filedescr, sizeof(filedescr));
		write(STDOUT_FILENO, "\n", 1);
		exit(100);
	}
}
