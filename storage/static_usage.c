#include <stdio.h>

void func();

int main() {

    int count = 0;
    while (count < 3)
    {
        count++;
        func();
    }
    
    return 0;
}


void func(){

    int a = 5;
    // static int a = 5; // to see static effect on the variable comment out 
    a++;
    printf("a: %d\n", a);

}