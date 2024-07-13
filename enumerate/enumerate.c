#include <stdio.h>
#include <stdbool.h>


enum Boolaen{
    new_false,
    new_true,
};


int main() {
    bool exp = false;
    if (exp == new_true)
    {
        printf("i am here\n");
    } else 
        printf("i am in the else case\n");
    
    return 0;
}