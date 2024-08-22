// C code to illustrate Internal Linkage
#include <stdio.h>
#include "./animals.c"

int main(void)
{
    call_me();
    animals = 2;
    printf("%d\n", animals);
    return 0;
}
