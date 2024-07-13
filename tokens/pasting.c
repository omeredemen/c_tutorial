#include <stdio.h>
#include <stdbool.h>

#define PASTE(X, Y) X##Y

#define create_struct(type) struct my_##type##_st{\
                                type a;\
                                float b;\
                            };

#define dbg_print(fmt,args...) printf("Debug: "fmt ,##args)

create_struct(int)

int main() {

    bool PASTE(should, _create) = 1; // this line create a variable thats name is should_create

    if (!should_create) return 1;

    struct my_int_st st;
    st.a = PASTE(1, 23);
    st.b = PASTE(4, .2);

    dbg_print("%d %f\n", st.a, st.b);
    printf("%d \t %f\n", st.a, st.b);
    return 0;
}
