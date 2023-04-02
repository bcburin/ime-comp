#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/shm.h>
#include <sys/stat.h>
#include <unistd.h>

#define SIZE 4096
#define NAME "OS"

int main() {
    int shm_fd;
    void *ptr;
    int *iptr;

    shm_fd = shm_open(NAME, O_RDWR, 0666);
    ptr = mmap(0, SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, shm_fd, 0);
    iptr = ptr + 512;

    printf("%s", (char *)ptr);

    *iptr = 10;

    return 0;
}