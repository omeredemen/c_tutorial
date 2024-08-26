#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    FILE *file;
    char readStr[256];

    file = fopen("file.txt", "a+");
    if (file == NULL) return EXIT_FAILURE;

    if(fputs("omer faruk edemen\n", file) < 0){
        return EXIT_FAILURE;
    }
    if(fputs("is there any way to save file without closing it\n", file) < 0){
        return EXIT_FAILURE;
    }

    if(fputs("the text file can be read after using fseek and fflush after the writing process\n", file) < 0){
        return EXIT_FAILURE;
    }

    fflush(file);
    fseek(file, 0, 0);

    // no need anymore
    // fclose(file);
    // file = fopen("file.txt", "a+");
    // if (file == NULL) return EXIT_FAILURE;
    while (fgets(readStr, 256, file) != NULL)
    {
        printf("%s", readStr);   
    }

    fclose(file);
    return 0;
}