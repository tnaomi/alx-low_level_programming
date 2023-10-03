#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 * Return: 1 if file EXISTS, -1 if NOT
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int status;
	int len;
	int write_f;

	if (!filename)
		return (-1);

	status = open(filename, O_WRONLY | O_APPEND);

	if (status == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;

		write_f = write(status, text_content, len);

		if (write_f == -1)
			return (-1);
	}

	close(status);

	return (1);
}
