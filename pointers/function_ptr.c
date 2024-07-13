#include <stdio.h>


typedef enum calculation{
    ADDITION,
    SUBTRACTION,
    MULTIPLACTION,
    DIVISION
} calculation;


void func(int x){
    printf("x: %d\n", x);
}

float add(float a, float b) {
    return a + b;
}

float divide(float a, float b) {
    return a / b;
}

float multiply(float a, float b){
    return a * b;
}

float subtract(float a, float b) {
    return a - b;
}

float (*calculator())(float a, float b){
    
    int calc = 1;
    printf("please enter operation: ");
    scanf("%d", &calc);

    if(calc == 0) {
        return add;
    } else if (calc == 1) {
        return subtract;
    } else if (calc == 2) {
        return multiply;
    } else if (calc == 3) {
        return divide;
    } else {
        return NULL;
    }
}

int main() {
    // first example

    

    void (*func_ptr) (int) = &func;
    // func_ptr = &func; // or it can be assigned like below
    // func_ptr = func;

    func_ptr(3);
    // (*func_ptr)(3);

    float (*ptr) (float, float) = &add;
    // float result = (*ptr)(10,20); // dereferencing explicitly
    float result = ptr(10,20); // dereferencing implicitly
    printf("result is: %f\n", result);

    // second example 
    //////////////////////////////////////////////////////////////////////////
    /* 
    float (*operation) (float, float) = calculator();

    int a = 0, b= 0;
    printf("enter numbers: ");
    scanf("%d %d", &a, &b);
    float result = operation(a, b);
    printf("result is %.3f\n", result);
    
    */

    // third example
    //////////////////////////////////////////////////////////////////////////
    /*
    float (*array[])(float, float) = {add, subtract, multiply, divide};

    int a = 3;
    int b = 4;

    float (*operation) (float, float) = array[0];
    float result = array[2](a, b);

    printf("after adding the result is %f\n", operation(a, b));
    printf("after multiplying result is %f\n", result);
    */
    
    return 0;
}