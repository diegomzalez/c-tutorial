// C program to demostrate extern variables.
#include "my_extern_variable_initialization.h"
#include <stdio.h>

void printfExternVariable(void)
{
    printf("Global Variable: %d\n", x);
    return;
}

int main(void)
{
    printfExternVariable();
    return 0;
}