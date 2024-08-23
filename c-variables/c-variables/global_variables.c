// C program to demostrate use of global variable
#include <stdio.h>

int x = 20; // Global variable.

void function1(void) { printf("Function 1: %d\n", x); }
void function2(void) { printf("Function 2: %d\n", x); }

int main(void)
{
    function1();
    function2();
    return 0;
}