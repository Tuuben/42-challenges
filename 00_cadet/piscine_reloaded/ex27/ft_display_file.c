#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{

    if (argv[1] == (void *)0)
    {
        // replace with write
        printf("File name missing.");
        return 0;
    }
    if (argv[2] != (void *)0)
    {
        // replace with write
        printf("Too many arguments. %s", argv[3]);
        return 0;
    }

    char *arg = argv[1];

    char buff[2048];
    size_t nbytes;
    ssize_t bytes_read;

    int file = open(arg, 0);

    if (file == -1)
    {
        printf("Could not read file");
        return 0;
    }

    nbytes = sizeof(buff);
    bytes_read = read(file, buff, nbytes);

    write(0, buff, bytes_read);

    close(file);

    return 1;
}