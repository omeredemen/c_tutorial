#include <stdio.h>
#include <string.h>


struct st{
    char c[32];
    float b;
    int a;
};

int main() {

    struct st st_1;
    struct st *st_ptr;

    st_ptr = &st_1;

    st_ptr->a = 15;
    st_ptr->b = 15.8;
    // st_ptr->c = "omer faruk edemen"; // cannot assign like this use strcpy or assign one by one

    strcpy(st_ptr->c, "omer faruk edemen");
    printf("sizeof st_1 is %ld\n", sizeof(*st_ptr));

    printf("the address of struct is %p\n", st_ptr);
    printf("address of str->c: %p\n", st_ptr->c);
    printf("address of str->b: %p\n", &st_ptr->b);
    printf("address of str->a: %p\n", &st_ptr->a);

    printf("str->a: %d\n", st_ptr->a);
    printf("str->b: %.2f\n", st_ptr->b);
    printf("str->c: %s\n", st_ptr->c);
    return 0;
}