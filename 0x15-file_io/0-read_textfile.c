#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stddef.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: name of the file to read
 *
 * @letters: maximum number of letters to read and print
 *
 * Return: Always 0 if filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd = open(filename, O_RDONLY);
char *buffer = (char *)malloc(letters);
ssize_t bytes_read = read(fd, buffer, letters);
ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

if (filename == NULL)
{
return (0);
}

if (fd == -1)
{
return (0);
}

if (buffer == NULL)
{
close(fd);
return (0);
}

if (bytes_written != bytes_read)
{
free(buffer);
close(fd);
return (0);
}

free(buffer);
close(fd);

return (bytes_written);
}
