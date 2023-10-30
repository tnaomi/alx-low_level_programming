#include "main.h"

/**
 * main - Displays ELF header info at the start of an ELF file.
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 98 if ELF header not present
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		elf_close(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		elf_close(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	elf_check(header->elf_ptr);
	printf("ELF Header:\n");
	magic(header->elf_ptr);
	class_print(header->elf_ptr);
	data(header->elf_ptr);
	version(header->elf_ptr);
	osabi(header->elf_ptr);
	abi(header->elf_ptr);
	type(header->e_type, header->elf_ptr);
	entry(header->e_entry, header->elf_ptr);

	free(header);
	elf_close(o);
	return (0);
}
