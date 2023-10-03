#include "main.h"

/**
 * error_hndle - checks if files can be opened.
 * @source: source.
 * @dest: destination.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_hndle(int source, int dest, char *argv[])
{
	if (source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int source, dest, err_close;
	ssize_t total_len, write_f;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp source dest");
		exit(97);
	}

	source = open(argv[1], O_RDONLY);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_hndle(source, dest, argv);

	total_len = 1024;
	while (total_len == 1024)
	{
		total_len = read(source, buf, 1024);
		if (total_len == -1)
			error_hndle(-1, 0, argv);
		write_f = write(dest, buf, total_len);
		if (write_f == -1)
			error_hndle(0, -1, argv);
	}

	err_close = close(source);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source);
		exit(100);
	}

	err_close = close(dest);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source);
		exit(100);
	}
	return (0);
}
