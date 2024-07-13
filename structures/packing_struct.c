// #pragma pack(1) // comment out here and se the affect

#include <stdio.h>

struct st1{
    char ch;    // 1 byte
    int i;      // 4 byte
    char c;     // 1 byte
};

// best practice - if we sort the variable with their allocated size im memory sum size will be reduce
struct st2{
    int i;
    char ch;
    char c;
};

struct st3{
    int i;
    char ch;
    char c;
}__attribute__((packed));


int main() {

    struct st1 obj1;
    struct st2 obj2;
    struct st3 obj3;
    
    printf("size of obj1: %ld\n", sizeof(obj1));
    printf("size of obj2: %ld\n", sizeof(obj2));
    printf("size of obj3: %ld\n", sizeof(obj3));

    return 0;
}