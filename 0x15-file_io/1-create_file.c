#include "main.h"
/**
 * create_file - function that creates a file.
 * Return: 1 OR -1.
 * @filename: the file name.
 * @text_content: data.
 */

int create_file(const char *filename, char *text_content)
{
int f;
ssize_t length = 0;
if (filename == NULL)
return (-1);

f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
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
