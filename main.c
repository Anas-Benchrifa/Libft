#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include "libft.h"

int main() {
    int fd;
    const char *filename = "example.txt";

    // Attempt to open the file with read-only access
    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        // If open fails, print the error message
        fprintf(stderr, "Error opening file %s: %s\n", filename, strerror(errno));
        return 1;
    }

    printf("File %s opened successfully with file descriptor: %d\n", filename, fd);

    // Close the file descriptor
    if (close(fd) == -1) {
        fprintf(stderr, "Error closing file: %s\n", strerror(errno));
        return 1;
    }

    printf("File closed successfully.\n");