#include <stdio.h>

#define SET_BIT(variable, shift) variable |= (1 << shift)
#define CLEAR_BIT(variable, shift) variable &= ~(1 << shift)
#define CHECK_BIT(variable, shift) variable & (1 << shift)
#define TOGGLE_BIT(variable, shift) variable ^= (1 << shift)

int main() {

    int a = 29;
    int shift = 1;


    a |= 1 << shift; // a = a | (1 << shift) = a |
    printf("new value of a: %d\n", a);

    a &= ~(1 << shift);
    printf("new value of a: %d\n", a);


    int x = 31;

    if ((x & 1 << shift) == 0) // control the given bit is 1 or 0
    {
        printf("%d. bit of the %d is set 0\n", shift, x);
    } else {
        printf("%d. bit of the %d is set 1\n", shift, x);
    }
    

    x ^= (1 << shift); // toggle indicated bit by shift variable
    printf("new value of x: %d\n", x);


    int y = 29;
    SET_BIT(y,1);
    printf("new value of y %d\n", y);
    CLEAR_BIT(y, 1);
    printf("new value of y %d\n", y);

    if (CHECK_BIT(y, shift) == 0) // control the given bit is 1 or 0
    {
        printf("%d. bit of the %d is set 0\n", shift, y);
    } else {
        printf("%d. bit of the %d is set 1\n", shift, y);
    }

    TOGGLE_BIT(y, 2);
    printf("new value of y: %d\n", y);

    return 0;
}