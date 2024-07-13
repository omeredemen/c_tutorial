#include <stdio.h>

#define SIZE 10

int main() {

    // First Example (casual array)
    ////////////////////////////////////////////////////////////////

    // int arr[10] = {};
    // printf("address of the first element of arr: %p\n", arr);
    // printf("value of the first element of arr: %d\n", *arr);

    // printf("address of the second element of arr: %p\n", arr + 1);
    // printf("value of the second element of arr: %d\n", *arr+1);


    // Second Example (the array that takes the other variable's address)
    ////////////////////////////////////////////////////////////////

    // int *arr[10] = {0};
    // int x = 5;
    // int y = 7;

    // arr[0] = &x; // takes the x's address
    // arr[1] = &y; // takes the y's address

    // printf("address of x: %p\n", &x);
    // printf("address of x: %p\n", *arr);
    // printf("address of x: %p\n", arr[0]);
    // printf("value of x: %d\n", x);
    // printf("value of x: %d\n", *arr[0]);
    // printf("value of x: %d\n", **arr);

    // printf("\n");

    // printf("address of y: %p\n", &y);
    // printf("address of y: %p\n", *arr + 1);
    // printf("address of y: %p\n", arr[1]);
    // printf("value of y: %d\n", y);
    // printf("value of y: %d\n", *arr[1]);
    // printf("value of y: %d\n", **(arr+1));


    // Third Example (the array that point just one array)
    ////////////////////////////////////////////////////////////////

    // we can assign like below
    // int ex[10] = {0};
    // int (*arr)[10] = &ex;
    // int (*arr)[10] = ex;

    // size of the arrays should be same otherwise something goes wrong like seg fault
    int ex[SIZE] = {0};
    int (*arr)[SIZE];

    // if we assing a varible that is not a array we'll get warning [-Wincompatible-pointer-types]
    // int a = 5;
    // arr = &a;

    arr = &ex;

    printf("address of ex: %p\n", &ex[0]);
    printf("address of ex: %p\n", ex);
    printf("address of ex: %p\n", *arr);
    printf("value of ex[0]: %d\n", ex[0]);
    printf("value of ex[0]: %d\n", *ex);
    printf("value of ex[0]: %d\n", **arr);

    printf("\n");

    printf("address of ex: %p\n", &ex[1]);
    printf("address of ex: %p\n", ex + 1);
    printf("address of ex: %p\n", *arr + 1);
    printf("value of ex[1]: %d\n", ex[1]);
    printf("value of ex[1]: %d\n", *(ex + 1));
    printf("value of ex[1]: %d\n", **(arr + 1));
    

    return 0;
}