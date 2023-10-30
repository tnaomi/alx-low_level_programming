#include "main.h"

/**
 * create_file - Create a file
 * @filename: pointer to filename
 * @text_content: File content to be inserted
 * Return: 1 if SUCCESS, -1 if any ERROR
 */

int create_file(const char *filename, char *text_content)
{
	int status;
	size_t len = 0;
	ssize_t write_f;

	if (filename == NULL)
		return (-1);

	status = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (status == -1)
		return (-1);

	if (!text_content)
		text_content = "";
	for (; text_content[len] != '\0'; len++)
		;

	write_f = write(status, text_content, len);
	if (write_f == -1)
		return (-1);

	close(status);

	return (1);
}
