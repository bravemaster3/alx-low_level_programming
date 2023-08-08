#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
char *gen_err(char *filename, int type);
void error_from_to(char *filename, int type);
void error_close(int filedescr);

#define USAGE_ERR "Usage: cp file_from file_to\n"
#define FROM_ERR "Error: Can't read from file "
#define WRITE_ERR "Error: Can't write to "
#define CLOSE_ERR "Error: Can't close fd "
#define BUFF_SIZE 1024

#endif /* MAIN_H */
