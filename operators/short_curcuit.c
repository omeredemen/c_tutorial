#include <stdio.h>

int main()
{
    int a = 10, b = 5, c;
    
    c = (++a > 5 || ++b > 10);
    printf("A = %d\nB = %d\nC = %d\n\n",a,b,c);
    

    c = (++a > 5 && ++b > 10);
    printf("A = %d\nB = %d\nC = %d\n",a,b,c);

    return 0;
}