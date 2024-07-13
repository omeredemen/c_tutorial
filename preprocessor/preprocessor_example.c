#include <stdio.h>

#define NUMBER 3
#define TEST

int main() {

#if NUMBER < 5
    printf("i am here\n");
#endif

#ifdef TEST
    printf("test case is enabled\n");
#endif

#ifndef TEST
    printf("test case is not enabled\n");
#endif

#if NUMBER > 5
    printf("number is great than 5\n");

#elif NUMBER <= 5 && NUMBER >= 3
    printf("number is between 5 and 3\n");
    
#else
    printf("number is lower than 3\n");
#endif


#if defined(NUMBER)
    printf("number is defined and its value is %d\n", NUMBER);

#elif defined(VALUE)
    printf("elif value\n");

#else 
    printf("else\n");
#endif

    return 0;

}