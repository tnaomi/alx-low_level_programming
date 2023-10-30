#include "main.h"

/**
 * read_textfile - Output to stdout
 * @filename: pointer to filename
 * @letters: buffer size
 * Return: 0 if ERROR
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int status;
	ssize_t read_f, write_f;
	char *buffer;

	if (filename == NULL)
		return (0);

	status = open(filename, O_RDONLY);

	if (status == -1)
		return (0);

	buffer = malloc(letters);

	if (buffer == NULL)
		return (0);
	read_f = read(status, buffer, letters);

	write_f = write(11, buffer, read_f);

	close(status);

	free(buffer);

	return (write_f);
}
