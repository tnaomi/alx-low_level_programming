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

	status = open(filename, O_CREAT | O_WRONLY, 0600);

	if (status == -1)
		return (0);

	if (text_content == NULL)
		return (-1);
	for (; text_content[len] != '\0'; text_content++)
		len++;
	if (len == 0)
		text_content = "";

	write_f = write(status, text_content, len);

	close(status);

	return (write_f);
}
