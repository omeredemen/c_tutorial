#include<stdio.h>

typedef void (*callback_)( void );

// Callback Function which has no argument and no return value
void callback_fn( void )
{
    printf("In callback function\n");
}

void test_loop( callback_ fn )
{
    for( int i = 0; i < 6; i++ )
    {
        if(i == 5)
        {
            // callback execution
            fn();
        }
        printf("i = %d\n", i);
    }
}

int main()
{
    // Registering the callback
    callback_  fn_ptr = &callback_fn;

    // calling the function with the function pointer
    test_loop(fn_ptr);

   return 0;
}