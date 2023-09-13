#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <elf.h>

#define BUF_SIZE 64

/* Function prototypes */
void print_error(const char *message);
void check_elf(const unsigned char *e_ident);
void print_header_info(const Elf64_Ehdr *header);
void print_magic(const unsigned char *e_ident);
void print_class(const unsigned char *e_ident);
void print_data(const unsigned char *e_ident);
void print_version(const unsigned char *e_ident);
void print_os_abi(const unsigned char *e_ident);
void print_abi_version(const unsigned char *e_ident);
void print_entry_point(const Elf64_Ehdr *header);

/**
 * main - Displays the information in the ELF header file
 * @argc: Argument counter.
 * @argv: Argument vector.
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	const char *filename;
	int fd;
	Elf64_Ehdr header;
	ssize_t read_size;

	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
		return (98);
	}

	filename = argv[1];
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		print_error("Error opening file");
		return (98);
	}

	read_size = read(fd, &header, sizeof(Elf64_Ehdr));
	if (read_size != sizeof(Elf64_Ehdr) ||
	    memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		print_error("Not an ELF file");
		close(fd);
		return (98);
	}
	printf("ELF Header:\n");
	print_header_info(&header);
	close(fd);
	return (0);
}

/**
 * print_error - Prints an error message to stderr
 * @message: Message to be printed.
 */
void print_error(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
}

/**
 * check_elf - Checks if the file is a valid ELF file.
 * @e_ident: Pointer to the ELF identifier.
 */
void check_elf(const unsigned char *e_ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (e_ident[index] != 127 && e_ident[index] != 'E'
		    && e_ident[index] != 'L' && e_ident[index] != 'F')
		{
			print_error("Not an ELF file");
			exit(98);
		}
	}
}

/**
 * print_header_info - Prints information from the ELF header
 * @header: pointer to the elf header
 */
void print_header_info(const Elf64_Ehdr *header)
{
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_os_abi(header->e_ident);
	print_abi_version(header->e_ident);
	print_entry_point(header);
}

/**
 * print_magic - Prints the ELF magic bytes
 * @e_ident: pointer to the elf identifier
 */
void print_magic(const unsigned char *e_ident)
{
	char buffer[BUF_SIZE];
	int index;

	printf("  Magic:   ");
	for (index = 0; index < EI_NIDENT; index++)
	{
		snprintf(buffer, sizeof(buffer), "%02x", e_ident[index]);
		printf("%s", buffer);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - Prints the ELF class
 * @e_ident: pointer to the elf identifier
 */
void print_class(const unsigned char *e_ident)
{
	printf("  Class:                             ");
	switch (e_ident[EI_CLASS])
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
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data - Prints the ELF data encoding
 * @e_ident: pointer to the elf identifier
 */
void print_data(const unsigned char *e_ident)
{
	printf("  Data:                              ");
	switch (e_ident[EI_DATA])
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
		printf("<unknown: %x>\n", e_ident[EI_DATA]);
	}
}

/**
 * print_version - Prints the ELF version
 * @e_ident: pointer to the elf identifier
 */
void print_version(const unsigned char *e_ident)
{
	printf("  Version:                           %d", e_ident[EI_VERSION]);
	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * print_os_abi - Prints the ELF OS/ABI
 * @e_ident: pointer to the elf identifier
 */
void print_os_abi(const unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");
	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * print_abi_version - Prints the ELF ABI Version
 * @e_ident: pointer to the elf identifier
 */
void print_abi_version(const unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_entry_point - Prints the ELF entry point address
 * @header: pointer to the elf header
 */
void print_entry_point(const Elf64_Ehdr *header)
{
	unsigned long int entry;

	if (header->e_ident[EI_DATA] == ELFDATA2MSB)
	{
		entry = ((header->e_entry << 8) & 0xFF00FF00) |
			((header->e_entry >> 8) & 0xFF00FF);
		entry = (entry << 16) | (entry >> 16);
		printf("  Entry point address:               %#lx\n", entry);
	}
	else
	{
		if (header->e_ident[EI_CLASS] == ELFCLASS32)
			printf("  Entry point address:               %#x\n",
			       (unsigned int)header->e_entry);
		else
			printf("  Entry point address:               %#lx\n", header->e_entry);
	}
}
