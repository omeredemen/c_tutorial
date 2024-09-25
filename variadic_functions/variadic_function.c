#include <stdio.h>
#include <stdarg.h>

int sum(int arg1, ...){
    va_list args;
    va_start(args, arg1);

    int result = arg1;
    int value = va_arg(args, int);

    while (value != NULL)
    {
        result += value;
        value = va_arg(args, int);
    }

    va_end(args);

    return result;
}

int main(int argc, char *argv[]) {
    printf("result is %d\n", sum(1, 2, 3, NULL));
    return 0;
}