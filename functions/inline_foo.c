#include <stdio.h>

int foo();
// int inline foo(); // if we declared like this we get undefined reference to `foo'

int main(){


    foo();
    return 0;
}


// inline keyword must be used while function is defining
int inline foo(){
    printf("hello world\n");
    return 0;
}