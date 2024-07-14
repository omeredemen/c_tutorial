#include <stdio.h>
#include <stdlib.h>
#include <string.h> // for strcpy()


/*
    i am trying to demonstrate the security issue while using realloc.
    i did this with using integer but for some reasons i couldn't get
    the output i want. the reasons were the behavior of memory allocator.
    Memory allocator might free the old allocated integer pointer.
    Because integer's footprint is big and it might cause some unwanted
    things in the code. 

    So i use char.
*/
int main() {
    int SIZE = 7; // Size to store a string of 6 characters plus null terminator
    int NEW_SIZE = 20; // New size to store a larger string
    char *ptr = NULL;
    char *backup_ptr;

    // Allocate memory for the initial string
    ptr = malloc(sizeof(char) * SIZE);
    printf("Initial ptr address: %p\n", (void*)ptr);

    strcpy(ptr, "abc123");

    printf("Initial string: %s\n", ptr);

    // Backup the original pointer
    backup_ptr = ptr;

    // Reallocate memory
    ptr = realloc(ptr, sizeof(char) * NEW_SIZE);

    printf("\nAfter realloc ptr address: %p\n", (void*)ptr);
    printf("backup_ptr address: %p\n", (void*)backup_ptr);

    strcat(ptr, "456789"); // Appending to the original string

    printf("\nNew string: %s\n", ptr);

    printf("\nContents of backup_ptr (may contain invalid data): %s\n", backup_ptr);

    printf("\nMemory content starting from backup_ptr:\n");
    for (int i = 0; i < NEW_SIZE; i++) {
        if (backup_ptr[i] == '\0') break; // Stop at null terminator
        printf("%c", backup_ptr[i]);
    }
    printf("\n");

    free(ptr); // Always use free() after you've done with your work

    return 0;
}
