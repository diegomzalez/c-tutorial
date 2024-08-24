// C program to demostrate use of automatic variables.
#include <stdio.h>

int function(void)
{
    int x = 10;      // Local variable (also automatic);
    auto int y = 20; // Automatic vairable.
    printf("Auto variable: %d\n", y);
}

int main(void)
{
    function();
    return 0;
}