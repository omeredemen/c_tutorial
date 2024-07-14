#include <stdio.h>
#include <stdlib.h> // for malloc(), calloc(), realloc()

int main() {
    int SIZE = 5;
    int *ptr = NULL;

    ptr = malloc(sizeof(int) * SIZE);
    printf("ptr address: %p\n", ptr);

    for (int i = 0; i < 5; i++)
        ptr[i] = i;

    for (int i = 0; i < 5; i++)
        printf("ptr[%d]: %d\n", i , *(ptr+i));

    free(ptr); // always use free() after you've done with your work
    return 0;
}