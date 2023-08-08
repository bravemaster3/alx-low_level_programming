#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>

/**
 * print_error - prints error
 * @msg: error message
 */
void print_error(const char *msg)
{
	fprintf(stderr, "Error: %s\n", msg);
	exit(98);
}

/**
 * print_elf_header - prints elf header
 * @header: the header
 */
void print_elf_header(const Elf64_Ehdr *header)
{
	int i;

	printf("Magic: ");
	for (i = 0; i < ELF_MAGIC_SIZE; ++i)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\nClass: %d-bit\n", header->e_ident[4] == 1 ? 32 : 64);
	printf("Data: %s\n", header->e_ident[5] == 1 ? "Little" : "Big");
	printf("Endian\n");
	printf("Version: %d\n", header->e_ident[6]);
	printf("OS/ABI: %d\n", header->e_ident[7]);
	printf("ABI Version: %d\n", header->e_ident[8]);
	printf("Type: %d\n", header->e_type);
	printf("Entry point address: 0x%lx\n", (unsigned long)header->e_entry);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: pointer to argument strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd;
	const char *filename;
	Elf64_Ehdr header;
	ssize_t bytes_read;

	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}

	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		print_error("Failed to open file");
	}

	bytes_read = read(fd, &header, sizeof(Elf64_Ehdr));
	if (bytes_read != sizeof(Elf64_Ehdr))
	{
		close(fd);
		print_error("Failed to read ELF header");
	}

	if (memcmp(header.e_ident, "\x7F\x45\x4C\x46", ELF_MAGIC_SIZE) != 0)
	{
		close(fd);
		print_error("Not an ELF file");
	}

	print_elf_header(&header);

	close(fd);
	return (0);
}
