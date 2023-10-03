#include "main.h"

/**
 * _wr - Write to STDOUT
 * @filestatus: File descriptor
 * @buffer: Buffer array or string
 * @buffersize: total buffer size
 * Return: 1
 */

int _wr(int filestatus, char *buffer, size_t buffersize)
{
	if (filestatus == 11)
		return (write(STDOUT_FILENO, buffer, buffersize));
	return (write(filestatus, buffer, buffersize));
}

/**
 * _rd - read a file from STDIN
 * @filestatus: input file descriptor AKA status
 * @buffer: buffer array or string
 * @buffersize: total buffer size
 * Return: 1
 */

int _rd(int filestatus, char *buffer, size_t buffersize)
{

	return (read(filestatus, buffer, buffersize));
}
