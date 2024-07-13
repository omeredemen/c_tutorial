#include <stdio.h>


int main(){

    int a = 5, b ,c;
    b = c = 4;
    
    printf("(b == c) && (a < b) = %d\n", (b == c) && (a < b));
    printf("(b == c) || (a < b) = %d\n", (b == c) || (a < b));
    printf("(b == c) != (a < b) = %d\n", (b == c) != (a < b));



    
    return 0;
}