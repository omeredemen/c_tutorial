#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>



int main(){
    FILE *file;
    char readFile[256];
    char searchStr[] = "Soru";
    int matches = 0;
    int number_empty_line = 0;
    int lines = 0;

    file = fopen("file.txt", "r");

    if (file == NULL){
        perror("connat open the file");
        exit(0);
    }

    while (fgets(readFile, sizeof(readFile)/sizeof(char), file) != NULL)
    {
        if(strstr(readFile, searchStr)) {
            matches++;
        }

        if (readFile[0] == '\n')
        {
            number_empty_line++;
        }

        lines++;
    }

    int number_video = lines - number_empty_line;
    printf("\nthe number of words matched with %s is %d\n", searchStr, matches);
    printf("there are %d non-empty line in this file\n", number_video);

    printf("this file is a video playlist about linear algebra. \n");
    printf("I am trying to find the videos that doesnt include questions in it.\n");
    printf("the number of videos i should watch is %d\n", number_video - matches);

    fclose(file);

    return 0;
}