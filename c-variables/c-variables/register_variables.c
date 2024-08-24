// C program to demostrate the definition of register
// variables.
#include <stdio.h>

int main(void)
{
    // Register variable.
    register int var = 22;

    printf("Value of register variable: %d\n", var);
    return 0;
}