#include <stdio.h>


int main() {
    int arr[] = {1, 2, 3, 4, 5};

    printf("arr: %p\n", arr);
    printf("*arr: %d\n", *arr);
    printf("*(arr+1): %d\n", *(arr+1));
    printf("*(arr+2): %d\n", *(arr+2));
    printf("*(arr+3): %d\n", *(arr+3));
    printf("*(arr+4): %d\n", *(arr+4));


    // either line that below can be used
    // char ch[] = "omer faruk edemen";
    char *ch = "omer faruk edemen";

    printf("the address of ch is %p\n", ch);

    int i = 0;
    do{
        printf("%c", *(ch + i));
        i++;
    } while (*(ch + i - 1) != '\0');

    printf("\nsize of ch is %d\n", i);

    return 0;
}
