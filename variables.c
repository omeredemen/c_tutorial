#include <stdio.h>


int a = 18; // global variable

int main(){
    printf("before defining inside main a: %d\n", a);

    int a = 5; // local variable of the main
    printf("after defining inside main  a: %d\n", a);

    {
        int a = 16; // local variable of this scope
        printf("inside scope a: %d\n", a);
    }

    return 0;
}