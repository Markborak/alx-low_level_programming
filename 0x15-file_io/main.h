#ifndef MAIN_FILE
#define MAIN_FILE

#include <sys/types.h>
#include <stddef.h>
#include <string.h>
ssize_t read_textfile(const char *filename, size_t max_size);

int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);





#endif /* MAIN_FILE */
