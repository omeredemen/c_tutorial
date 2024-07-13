#include <stdio.h>


struct bit_fields
{
    int day : 5;
    int month : 4;
    int year: 12; // until 2048, it will work
};

int main(){
    struct bit_fields d;

    d.day = 11;
    d.month = 7;
    d.year = 2024;

    printf("day: %d, month: %d, year: %d\n", d.day, d.month, d.year);
    printf("size of the bit_fields is %ld\n", sizeof(struct bit_fields));
    printf("size of the d is %ld\n", sizeof(d));
    return 0;
}