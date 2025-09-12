#include "main.h"

/**
 * close_error - prints an error message and exits if close fails
 * @fd: file descriptor that failed to close
 */
void close_error(long int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %li\n", fd);
	exit(100);
}

/**
 * dpf_error - prints an error message and exits with given code
 * @readout: message to print before filename
 * @filename: file that caused the error
 * @exit_c: exit code
 */
void dpf_error(char *readout, char *filename, int exit_c)
{
	dprintf(STDERR_FILENO, "%s%s\n", readout, filename);
	exit(exit_c);
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of argument strings
 * Return: 0 on success, exits with code on error
 */
int main(int argc, char **argv)
{
	long int file_from, file_to, r_bytes;
	ssize_t w_bytes, total_written;
	char buffer[1024];
	int close_v;

	if (argc != 3)
		dpf_error("Usage: cp file_from file_to", "", 97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
		dpf_error("Error: Can't read from file ", argv[1], 98);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);
	if (file_to < 0)
		dpf_error("Error: Can't write to ", argv[2], 99);

	do {
		r_bytes = read(file_from, buffer, 1024);
		if (r_bytes < 0)
			dpf_error("Error: Can't read from file ", argv[1], 98);

		total_written = 0;
		while (total_written < r_bytes)
		{
			w_bytes = write(file_to, buffer + total_written, r_bytes - total_written);
			if (w_bytes < 0)
				dpf_error("Error: Can't write to ", argv[2], 99);
			total_written += w_bytes;
		}
	} while (r_bytes == 1024);

	close_v = close(file_from);
	if (close_v < 0)
		close_error(file_from);
	close_v = close(file_to);
	if (close_v < 0)
		close_error(file_to);

	return (0);
}

