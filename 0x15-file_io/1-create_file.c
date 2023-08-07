#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
/**
 * create_file - creates a file and fills with content
 * @filename: filename string
 * @text_content: content to write in the file
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int filedescr, check_wr = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	filedescr = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (filedescr == -1)
		return (-1);
	check_wr = write(filedescr, text_content, strlen(text_content));
	if (check_wr == -1)
	{
		close(filedescr);
		return (-1);
	}
	close(filedescr);
	return (1);
}
