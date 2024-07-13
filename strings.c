#include <stdio.h>
#include <string.h>
// int main(int argc, char *argv[]){

//     char *word;

//     char c[] = "omerfarukedemen";
//     word = c;

//     printf("%s\n", word);
//     scanf("%3s", word);

//     printf("%s\n", word);
//     return 0;
// }

// int main(int argc, char **argv) {

//     char *ptr;
//     char word[20];

//     ptr = word;

//     snprintf(ptr, sizeof(word), "omer");

//     // printf("sizeof word %d\n", sizeof(ptr));
//     printf("sizeof word %zu\n", sizeof(word)); // Use %zu for size_t type

//     printf("%s\n", ptr);
//     return 0;
// }

int main() {
/*
    // char str[] = {'E', 'm', 'b', 'e', 'T', 'r', 'o', 'n', 'i', 'c', 'X', '\0'}; // it is an array of characters
    // char str[12] = {'E', 'm', 'b', 'e', 'T', 'r', 'o', 'n', 'i', 'c', 'X', '\0'}; // it is an array of characters
    // char str[] = "EmbetronicX"; // array of characters
    char str[] = "EmbetronicX"; // array of characters
    // char *str = "EmbetronicX"; // literal strings

    str[2] = 'a';
    str = "omerfarukedemen";
    // str = "amenos";
    printf("%s\n", str);
    printf("size of str is %zu\n", sizeof(str));
    printf("the last character of str is %d\n", str[11]);
*/


    char arr[] = "some long string";

    int i = 0;

    do
    {
        i++;
    } while (*(arr + i));
    printf("the lenght of the given array is %d and %d \n", i, strlen(arr));


    return 0;
}


// int main(){

//     char str[] = {'E', 'm', 'b', 'e', 'T', 'r', 'o', 'n', 'i', 'c', 'X', '\0'}; // 

//     str[2] = 'a';

//     printf("%s\n", str);
//     printf("size of str is %zu\n", sizeof(str));

//     return 0;
// }