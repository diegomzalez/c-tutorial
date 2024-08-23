// C program to declare and print local variable inside a
// function.
#include <stdio.h>

void function(void)
{
    int x = 10; // local variable.
    printf("Value of x = %d", x);
    return;
}

int main(void)
{
    function();
    return 0;
}