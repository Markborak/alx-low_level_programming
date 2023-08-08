#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * append_text_to_file - function that appends text to the end of a file
 *
 * @filename: file in which text is appended
 *
 * @text_content: parameter
 *
 * Return: 1 if file exists or -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t len = 0;

if (!filename)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

if (text_content)
len = write(fd, text_content, strlen(text_content));

close(fd);

if (len == -1)
return (-1);
return (1);
}

