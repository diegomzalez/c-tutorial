// C program to demostrate static functions.
#include <stdio.h>
#include <stdlib.h>

void static static_funcion(void)
{
    auto char *string = (char *)calloc(20, sizeof(char));
    string = "I am a string!";
    printf("%s\n", string);
    return;
}

int main(void)
{
    static_funcion();
    return 0;
}