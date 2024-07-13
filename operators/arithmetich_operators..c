#include <stdio.h>
int main()
{

    int a = 4,  b = 2, c;
    
    c = a + b;
    printf("a + b = %d \n",c);
    c = a - b;
    printf("a - b = %d \n",c);
    c = a * b;
    printf("a * b = %d \n",c);
    c = a / b;
    printf("a / b = %d \n",c);
    c = a % b;
    printf("a %% b = %d\n",c); // use two % to escape the warning
    
    return 0;
}
