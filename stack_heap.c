#include <stdio.h>

int array[10];


int *createArray(void){

    return array;
}


int main() {

    int *a = createArray();

    for (size_t i = 0; i < 10; i++){
        *(a + i) = i;
        // printf("%d\n" , a[i]);
    }
    
    int i = 0;
    do
    {
        printf("%d\n", *(a+i));
        i++;
    } while (*(a+i));
    
        
}