#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file to be read
 * @letters: number of letters to be read
 * Return:actual number of bytes to read and print
 *        0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t br, bw;

	if (filename == NULL)
	return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);

	buff = malloc(letters);
	if (buff == NULL)
	{
	close(fd);
	return (0);
	}

	br = read(fd, buff, letters);
	if (br == -1)
	{
	free(buff);
	close(fd);
	return (0);
	}

	bw = write(STDOUT_FILENO, buff, br);
	if (bw == -1 || bw != br)
	{
	free(buff);
	close(fd);
	return (0);
	}

	free(buff);
	close(fd);
	return (bw);
}
