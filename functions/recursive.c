#include <stdio.h>

int factorial(int number);
int sumDecreasedValue(int number);

int main(){

    int n = 0;

    printf("enter a value: ");
    scanf("%d", &n);

    printf("factorial of %d is %d\n", n, factorial(n));
    printf("summary of range of 0 to %d is %d\n", n, sumDecreasedValue(n));
    return 0;
}

int factorial(int number) {
    if (number > 1) {
        return number * factorial(number - 1);
    }

    return 1;
}

int sumDecreasedValue(int number){
    if (number > 0)
    {
        return number + sumDecreasedValue(number - 1);
    }

    return 0;
    
}