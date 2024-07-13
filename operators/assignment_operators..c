#include <stdio.h>
int main()
{
    int a = 5, b;
    
    b = a;      // b is 5
    printf("b = %d\n", b);
    b += a;     // b is 10 b = b + a
    printf("b = %d\n", b);
    b -= a;     // b is 5 b = b - a
    printf("b = %d\n", b);
    b *= a;     // b is 25  b = b * a
    printf("b = %d\n", b);
    b /= a;     // b is 5  b = b / a
    printf("b = %d\n", b);
    b %= a;     // b = 0  b = b % a
    printf("b = %d\n", b);
    return 0;
}
