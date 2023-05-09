#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <elf.h>

/**
 * Displays the information contained in the ELF header at the start of an ELF file.
 *
 * @param elf_filename The name of the ELF file to be read.
 * @return 0 on success, 98 on error.
 */
int elf_header(const char *elf_filename)
{
	int fd;
	
	fd = open(elf_filename, O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Could not open file %s\n", elf_filename);
		return (98);
	}
	if (read(fd, &elf_header, sizeof(Elf32_Ehdr)) != sizeof(Elf32_Ehdr))
	{
		fprintf(stderr, "Error: Could not read ELF header from file %s\n", elf_filename);
		close(fd);
		return (98);
	}
	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
			elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
			elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
			elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: File %s is not an ELF file\n", elf_filename);
		close(fd);
		return (98);
	}
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", elf_header.e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             %s\n", elf_header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              2's complement, %s\n", elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "little endian" : "big endian");
	printf("  Version:                           %d\n", elf_header.e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n", elf_header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "UNKNOWN");
	printf("  ABI Version:                       %d\n", elf_header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n", elf_header.e_type == ET_EXEC ? "EXEC (Executable file)" : elf_header.e_type == ET_DYN ? "DYN (Shared object file)" : "UNKNOWN");
	printf("  Entry point address:               0x%x\n", elf_header.e_entry);
	close(fd);
	return 0;
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return 1;
	}
	return elf_header(argv[1]);
}
