#include <stdio.h>

int main(){

    int arr[2][5] = {
        #include "data.txt"
    };

    for (int i = 0; i < 2; i++)
    {
        printf("row %d:  ", i);
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
