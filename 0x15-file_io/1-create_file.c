#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * create_file - funtion creates a file
 *
 * @filename: pointer to the file to be created
 *
 * @text_content: parameter
 *
 * Return: Always 0 if the file cannot be opened for resd and write
 */

int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t len = 0;

if (!filename)
return (-1);

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);

if (text_content)
len = write(fd, text_content, strlen(text_content));

close(fd);

return (len == -1 ? -1 : 1);
}

