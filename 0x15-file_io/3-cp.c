#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * error_exit - Prints an error message and exits with a given code
 * @exit_code: The exit code
 * @format: The error message format
 * @...: Additional arguments for the format
 */

void error_exit(int exit_code, const char *format, ...)
{
	va_list args;
	va_start(args, format);

	dprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(exit_code);
}

int main(int argc, char *argv[])
{
	char *file_from, *file_to;
	int fd_from, fd_to;
	ssize_t br, bw;
	char buff[1024];

	if (argc != 3)
	error_exit(97, "Usage: cp file_from file_to\n");

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);

	error_exit(98, "Error: Can't read from file %s\n", file_from);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	error_exit(99, "Error: Can't write to %s\n", file_to);

	while ((br = read(fd_from, buff, sizeof(buff))) > 0)
	{
	bw = write(fd_to, buff, br);
	if (bw == -1)
	error_exit(99, "Error: Can't write to %s\n", file_to);
	}

	if (br == -1)
	error_exit(98, "Error: Can't read from file %s\n", file_from);

	if (close(fd_from) == -1 || close(fd_to) == -1)
	error_exit(100, "Error: Can't close fd\n");

	return (0);
}
