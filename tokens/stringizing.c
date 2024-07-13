#include <stdio.h>

#define AGE 25
#define tokenpaster(n) printf ("token" #n " = %d\n", token##n)
#define stringizing(x) #x

int token34 = 45;

int main(){
    // int token = 34;
    tokenpaster(34);

    int a = 5;
    printf("%s\n", stringizing(a + AGE));
    return 0;
}