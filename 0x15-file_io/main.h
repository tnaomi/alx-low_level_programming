#ifndef MAIN_H
#define MAIN_H


#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <elf.h>


int _putchar(char c);

int _wr(int filestatus, char *buffer, size_t buffersize);

int _rd(int filestatus, char *buffer, size_t buffersize);

ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);

void elf_check(unsigned char *elf_ptr);
void magic(unsigned char *elf_ptr);
void class_print(unsigned char *elf_ptr);
void data(unsigned char *elf_ptr);
void version(unsigned char *elf_ptr);
void abi(unsigned char *elf_ptr);
void osabi(unsigned char *elf_ptr);
void print_type(unsigned int e_type, unsigned char *elf_ptr);
void print_entry(unsigned long int e_entry, unsigned char *elf_ptr);
void elf_close(int elf);
#endif /* MAIN.H*/
