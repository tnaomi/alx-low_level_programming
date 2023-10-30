#include "main.h"

/**
 * elf_check - Checks if a file is ELF formatted.
 * @elf_ptr: A pointer to an array containing the ELF magic numbers.
 * Description: If not ELF file - exit code 98.
 */
void elf_check(unsigned char *elf_ptr)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (elf_ptr[index] != 127 &&
			elf_ptr[index] != 'E' &&
			elf_ptr[index] != 'L' &&
			elf_ptr[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * magic - Prints the magic numbers of an ELF header.
 * @elf_ptr: A pointer to an array containing the ELF magic numbers.
 * Description: Magic numbers are separated by spaces.
 */
void magic(unsigned char *elf_ptr)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", elf_ptr[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * class_print - Prints the class of an ELF header.
 * @elf_ptr: A pointer to an array containing the ELF class.
 */
void class_print(unsigned char *elf_ptr)
{
	printf("  Class:                             ");

	switch (elf_ptr[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_ptr[EI_CLASS]);
	}
}

/**
 * data - Prints the data of an ELF header.
 * @elf_ptr: A pointer to an array containing the ELF class.
 */
void data(unsigned char *elf_ptr)
{
	printf("  Data:                              ");

	switch (elf_ptr[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_ptr[EI_CLASS]);
	}
}

/**
 * version - Prints the version of an ELF header.
 * @elf_ptr: A pointer to an array containing the ELF version.
 */
void version(unsigned char *elf_ptr)
{
	printf("  Version:                           %d",
		   elf_ptr[EI_VERSION]);

	switch (elf_ptr[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}
