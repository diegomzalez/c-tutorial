// C program to demostrate the down qualification.

#include <stdio.h>

int main(void)
{
    int i = 10;
    int const j = 20;

    // ptr is pointing an integer object.
    int *ptr = &i;

    printf("ptr: %d\n", *ptr);

    /* The bellow assigment is invalid in C++, results in
    error in C, the compiler *may* throw a warning, but
    casting is implicity allowd.
    */
    ptr = &j;

    printf("%d", *ptr);
}