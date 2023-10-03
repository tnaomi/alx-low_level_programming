#ifndef MAIN_H
#define MAIN_H


#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/*Print a single character*/
int _putchar(char c);
/*Print a file to stdout*/
int _wr(int filestatus, char *buffer, size_t buffersize);
/*Read a file*/
int _rd(int filestatus, char *buffer, size_t buffersize);
/* Print a text file*/
ssize_t read_textfile(const char *filename, size_t letters);
/*Create a file*/
int create_file(const char *filename, char *text_content);
/*Append to a file*/
int append_text_to_file(const char *filename, char *text_content);
#endif /* MAIN.H*/
