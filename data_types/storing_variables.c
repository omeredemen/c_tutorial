#include <stdio.h>

void printBinary(int num) {
    for (int i = sizeof(num) * 8 - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}


int main() {
    int positive = 2;
    int negative = -2;

    printf("Binary representation of %d: ", positive);
    printBinary(positive);

    printf("Binary representation of %d: ", negative);
    printBinary(negative);

    return 0;
}
