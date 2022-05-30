#ifndef FILE_IO_
#define FILE_IO_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <elf.h>
#include <sys/types.h>
#include <fcntl.h>

/**
 * _strlen - main function to swqp
 *
 * @s: int var to be checked for tis length
 * Return: return 0
 */

int _strlen(char *s)
{
	int LOF;
	int i = 0;

	for (LOF = 0; s[LOF] != '\0'; LOF++)
	{
		i++;
	}
	return (i);
}

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);

#endif /* FILE_IO_ */
