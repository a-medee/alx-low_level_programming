#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void verify(unsigned char *);
void elf_magic_number(unsigned char *);
void elf_class(unsigned char *);
void data_to_be_displayed(unsigned char *);
void display_version(unsigned char *);
void abi_display(unsigned char *);
void osabi(unsigned char *);
void elf_type(unsigned int e_type, unsigned char *);
void elf_entry(unsigned long int, unsigned char *);
void close_elf_file_desciptor(int elf);

/**
 * verify - checks if a file is an ELF file or not
 * @a_ident: A pointer to an array
 *
 * Description: exit code 98 on error
 */
void verify(unsigned char *a_ident)
{
	int idx;

	for (idx = 0; idx < 4; idx++)
	{
		if (a_ident[idx] != 127 &&
		    a_ident[idx] != 'E' &&
		    a_ident[idx] != 'L' &&
		    a_ident[idx] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * elf_magic_number - prints the magic numbers
 * @a_ident: A pointer to an array
 *
 * Description: magic numbers separated by spaces
 */
void elf_magic_number(unsigned char *a_ident)
{
	int idx;

	printf("  Magic:   ");

	for (idx = 0; idx < EI_NIDENT; idx++)
	{
		printf("%02x", a_ident[idx]);

		if (idx == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * elf_class - prints the class of an ELF header file
 * @a_ident: A pointer to an array
 */
void elf_class(unsigned char *a_ident)
{
	printf("  Class:                             ");

	switch (a_ident[EI_CLASS])
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
		printf("<unknown: %x>\n", a_ident[EI_CLASS]);
	}
}

/**
 * data_to_be_displayed - prints the data of an ELF header file
 * @a_ident: A pointer to an array
 */
void data_to_be_displayed(unsigned char *a_ident)
{
	printf("  Data:                              ");

	switch (a_ident[EI_DATA])
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
		printf("<unknown: %x>\n", a_ident[EI_CLASS]);
	}
}

/**
 * display_version - prints the version of an ELF header file
 * @a_ident: A pointer to an array
 */
void display_version(unsigned char *a_ident)
{
	printf("  Version:                           %d",
	       a_ident[EI_VERSION]);

	switch (a_ident[EI_VERSION])
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
 * osabi - prints the OS/ABI of an ELF header file
 * @a_ident: A pointer to an array
 */
void osabi(unsigned char *a_ident)
{
	printf("  OS/ABI:                            ");

	switch (a_ident[EI_OSABI])
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
		printf("<unknown: %x>\n", a_ident[EI_OSABI]);
	}
}

/**
 * abi_display - prints the ABI version of an ELF header file
 * @a_ident: A pointer to an array
 */
void abi_display(unsigned char *a_ident)
{
	printf("  ABI Version:                       %d\n",
	       a_ident[EI_ABIVERSION]);
}

/**
 * elf_type - prints the type of an ELF header file
 * @a_type: ELF type.
 * @a_ident: A pointer to an array
 */
void elf_type(unsigned int a_type, unsigned char *a_ident)
{
	if (a_ident[EI_DATA] == ELFDATA2MSB)
		a_type >>= 8;

	printf("  Type:                              ");

	switch (a_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", a_type);
	}
}

/**
 * elf_entry - prints the entry point of an ELF header file
 * @a_entry: address of ELF entry point.
 * @a_ident: A pointer to an array
 *
 * Return: a type void element
 */
void elf_entry(unsigned long int a_entry, unsigned char *a_ident)
{
	printf("  Entry point address:               ");

	if (a_ident[EI_DATA] == ELFDATA2MSB)
	{
		a_entry = ((a_entry << 8) & 0xFF00FF00) |
			  ((a_entry >> 8) & 0xFF00FF);
		a_entry = (a_entry << 16) | (a_entry >> 16);
	}

	if (a_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)a_entry);

	else
		printf("%#lx\n", a_entry);
}

/**
 * close_elf_file_desciptor - closes ELF file.
 * @elf: file descriptor of ELF file.
 *
 * Description: exit code 98 on error
 * Return: a type void
 */
void close_elf_file_desciptor(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - program entry point
 * @argc: The number of arguments
 * @argv: An array of pointers
 *
 * Return: 0 on Success
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
		close_elf_file_desciptor(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf_file_desciptor(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	verify(header->e_ident);
	printf("ELF Header:\n");
	elf_magic_number(header->e_ident);
	elf_class(header->e_ident);
	data_to_be_displayed(header->e_ident);
	display_version(header->e_ident);
	osabi(header->e_ident);
	abi_display(header->e_ident);
	elf_type(header->e_type, header->e_ident);
	elf_entry(header->e_entry, header->e_ident);

	free(header);
	close_elf_file_desciptor(o);
	return (0);
}
