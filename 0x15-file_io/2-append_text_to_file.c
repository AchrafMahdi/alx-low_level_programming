#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * Return: 1 OR -1.
 * @filename: the file name.
 * @text_content: data.
 */

int append_text_to_file(const char *filename, char *text_content)
{
int f;
ssize_t length = 0;

if (filename == NULL)
return (-1);

f = open(filename, O_WRONLY | O_APPEND);
if (f == -1)
return (-1);

if (text_content != NULL)
{
while (text_content[length] != '\0')
length++;
if (write(f, text_content, length) != length)
{
close(f);
return (-1);
}
}
close(f);
return (1);
}

