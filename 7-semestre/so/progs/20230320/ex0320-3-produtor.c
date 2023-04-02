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
#define EMPTY -1

int main() {
    int shm_fd;
    void* ptr;
    int* iptr;

    shm_fd = shm_open(NAME, O_CREAT | O_RDWR, 0666);
    ftruncate(shm_fd, SIZE);
    ptr = mmap(0, SIZE, PROT_WRITE, MAP_SHARED, shm_fd, 0);

    iptr = (int*)ptr;

    *iptr = EMPTY;
    ptr += sizeof(EMPTY);

    while (*iptr == EMPTY)
        ;

    printf("%d\n", *iptr);

    shm_unlink(NAME);

    return 0;
}