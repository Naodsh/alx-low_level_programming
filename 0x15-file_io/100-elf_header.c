#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>

#define MAX_BUFFER_SIZE 4096

/**
 * display_error - Display an error message to stderr and exit.
 * @code: The exit code.
 * @message: The error message to display.
 */
void display_error(int code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

/**
 * print_elf_info - Print information contained in the ELF header.
 * @ehdr: Pointer to the ELF header structure.
 */
void print_elf_info(Elf64_Ehdr *ehdr)
{
	printf("Magic:  ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", ehdr->e_ident[i]);
	}
	printf("\n");

	printf("Class:  %s\n", ehdr->e_ident[EI_CLASS] == ELFCLASS32 ?
			"ELF32" : ehdr->e_ident[EI_CLASS] == ELFCLASS64 ?
			"ELF64" : "<unknown>");
	printf("Data:   %s\n", ehdr->e_ident[EI_DATA] == ELFDATA2LSB ?
			"2's complement, little endian"
			: ehdr->e_ident[EI_DATA] == ELFDATA2MSB ?
			"2's complement, big endian" : "<unknown>");
	printf("Version: %d (current)\n", ehdr->e_ident[EI_VERSION]);
	printf("OS/ABI: ");

	switch (ehdr->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
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
			printf("UNIX - ARM\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}

	printf("ABI Version: %d\n", ehdr->e_ident[EI_ABIVERSION]);

	printf("Type:   %s\n", ehdr->e_type == ET_NONE ? "NONE (Unknown Type)"
			: ehdr->e_type == ET_REL ? "REL (Relocatable file)" :
			ehdr->e_type == ET_EXEC ? "EXEC (Executable file)" :
			ehdr->e_type == ET_DYN ? "DYN (Shared object file)" :
			ehdr->e_type == ET_CORE ? "CORE (Core file)" :
			"<unknown>");
	printf("Entry point address: 0x%lx\n", (unsigned long)ehdr->e_entry);
}

int main(int argc, char *argv[])
{
	int fd;
        char buffer[MAX_BUFFER_SIZE];
	ssize_t read_result;

	if (argc != 2)
		display_error(98, "Usage: elf_header elf_filename");
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		display_error(98, "Error: Can't open the specified file");
	read_result = read(fd, buffer, sizeof(Elf64_Ehdr));
	if (read_result != sizeof(Elf64_Ehdr) ||
			memcmp(buffer, ELFMAG, SELFMAG) != 0)
	{
		display_error(98, "Error: Not an ELF file");
	}
	lseek(fd, 0, SEEK_SET);
	Elf64_Ehdr ehdr;
	read_result = read(fd, &ehdr, sizeof(Elf64_Ehdr));
	if (read_result == -1)
		display_error(98, "Error: Can't read the ELF header");
	print_elf_info(&ehdr);
	close(fd);
	return (0);
}
