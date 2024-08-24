// C program to demostrate constant variables.
#include <stdio.h>

int main(void)
{
    // automatic variable.
    auto int not_constant_var;
    // automatic constant variable.
    auto const int constant_var = 20;

    not_constant_var = 10;
    return 0;
}