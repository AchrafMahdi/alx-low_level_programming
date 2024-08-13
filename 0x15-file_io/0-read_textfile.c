#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it to the POSIX.
 * Return: the actual number of letters it could read and print or 0.
 * @filename: the file name.
 * @letters: how much letters you want to read.
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
int f;
ssize_t letters_read, letters_written;
char *buff;

if (filename == NULL)
return (0);

f = open(filename, O_RDONLY);
if (f == -1)
return (0);

buff = malloc(sizeof(char) * letters);
if (buff == NULL)
return (0);

letters_read = read(f, buff, letters);
if (letters_read == -1)
{
free(buff);
close(f);
return (0);
}

letters_written = write(STDOUT_FILENO, buff, letters_read);
if (letters_written == -1 || letters_written != letters_read)
{
free(buff);
close(f);
return (0);
}

free(buff);
close(f);
return (letters_written);
}
