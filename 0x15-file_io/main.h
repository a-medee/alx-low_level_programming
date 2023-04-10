#ifndef _MAIN_H_
#define _MAIN_H_
#include <aio.h>
#include <sys/types.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void close_file(int, int);
void write_to_dest(int, int, char *, char *, char *);

#endif /* _MAIN_H_ */
