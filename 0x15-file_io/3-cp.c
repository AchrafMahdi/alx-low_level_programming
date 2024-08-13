#include "main.h"

/**
* main - program that copies the content of a file to another file.
* @argc: num argument
* @argv: string argument
* Return: 0
*/

void printErr(const char *msg, const char *file, int exit_code)
{
dprintf(STDERR_FILENO, msg, file);
exit(exit_code);
}

int main(int argc, char *argv[])
{
int f_from;
int f_to;
ssize_t r_read;
ssize_t w_written;
char buff[1024];

if (argc != 3)
printErr("Usage: cp %s %s\n", "", 97);

f_from = open(argv[1], O_RDONLY);

if (f_from == -1)
printErr("Error: Can't read from file %s\n", argv[1], 98);

f_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (f_to == -1)
{
close(f_from);
printErr("Error: Can't write to %s\n", argv[2], 99);
}
while ((r_read = read(f_from, buff, 1024)) > 0)
{
w_written = write(f_to, buff, r_read);
if (w_written != r_read)
{
close(f_from);
close(f_to);
printErr("Error: Can't write to %s\n", argv[2], 99);
}
}
if (r_read == -1)
{
close(f_from);
close(f_to);
printErr("Error: Can't read from file %s\n", argv[1], 98);
}
if (close(f_from) == -1)
printErr("Error: Can't close fd %d\n", f_from, 100);
if (close(f_to) == -1)
printErr("Error: Can't close fd %d\n", f_to, 100);
return (0);
}
