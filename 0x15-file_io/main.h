#ifndef MAIN_H
#define MAIN_H


#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


int _putchar(char c);

int _wr(int filestatus, char *buffer, size_t buffersize);

int _rd(int filestatus, char *buffer, size_t buffersize);

ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN.H*/
