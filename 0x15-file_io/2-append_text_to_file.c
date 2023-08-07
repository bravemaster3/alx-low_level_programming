#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

/**
 * append_text_to_file - Appends text to a file
 * @filename: filename string
 * @text_content: text to append
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filedescr, check_wr;

	if (filename == NULL)
		return (-1);
	filedescr = open(filename, O_WRONLY | O_APPEND);
	if (filedescr == -1)
		return (-1);
	if (text_content != NULL)
	{
		check_wr = write(filedescr, text_content, strlen(text_content));
		if (check_wr == -1)
			return (-1);
	}
	return (1);
}
