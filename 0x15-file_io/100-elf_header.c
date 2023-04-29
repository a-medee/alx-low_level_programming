#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define ELF_MAGIC "\x7fELF"

void print_elf_header(char *elf_header);

/**
 * main - The main function of the program
 *
 * @argc: The number of command-line arguments
 * @argv: The array of command-line arguments
 *
 * Return: The exit status of the program
 */

int main(int argc, char *argv[])
{
	FILE *fp = fopen(argv[1], "rb");
	char elf_header[34];

	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	if (fp == NULL)
	{
		fprintf(stderr, "Error opening file: %s\n", argv[1]);
		exit(98);
	}


	if (fseek(fp, 0, SEEK_SET) != 0)
	{
		fprintf(stderr, "Error seeking to start of file\n");
		exit(98);
	}

	if (fread(elf_header, 1, sizeof(elf_header), fp) != sizeof(elf_header))
	{
		fprintf(stderr, "Error reading ELF header\n");
		exit(98);
	}

	if (strncmp(elf_header, "7fELF", 4) != 0)
	{
		fprintf(stderr, "File is not an ELF file\n");
		exit(98);
	}
	print_elf_header(elf_header);
	fclose(fp);

	return (0);
}

/**
 * print_elf_header - print the information contained in the ELF header.
 * @elf_header: Pointer to the ELF header
 *
 * Return a type void element
 */
void print_elf_header(char *elf_header)
{
	printf("ELF Header:\n");
	printf("  Magic:   %s\n", elf_header);
	printf("  Class:     %d\n", elf_header[4]);
	printf("  Data:      %d\n", elf_header[5]);
	printf("  Version:   %d\n", elf_header[6] & 0x0f);
	printf("  OS/ABI:    %d\n", elf_header[7] & 0x0f);
	printf("  ABI Version:%d\n", elf_header[8] & 0x0f);
	printf("  Type:      %d\n", elf_header[9] & 0x0f);
	printf("  Entry point address:%x\n", *(unsigned int *)&elf_header[10]);
}
