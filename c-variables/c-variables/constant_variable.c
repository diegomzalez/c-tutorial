// C proram to illustrate constant variabe definition.
#include <stdio.h>

// Defining constant with preprocessor.
#define PI 3.14f

int test(void)
{
    printf("Executing test function...\n");
    /* i is stored in read only area*/
    int const i = 10;
    int j = 20;

    /* pointer to integer constant. Here i
    is of type "const int", and &i is of
    type "const int *".  And p is of type
    "const int", types are matching no issue */
    int const *ptr = &i;

    printf("ptr: %d\n", *ptr);

    /* error */
    // *ptr = 100;

    /* valid. We call it up qualification. In
    C/C++, the type of "int *" is allowed to up
    qualify to the type "const int *". The type of
    &j is "int *" and is implicitly up qualified by
    the compiler to "const int *" */

    ptr = &j;
    printf("ptr: %d\n", *ptr);

    return 0;
}

int main(void)
{
    // Defining integer constant using const keyword.
    const int int_const = 25;

    // Defining character constant using const keyword.
    const char char_const = 'A';

    // Defining float constant using const keyword.
    const float float_const = 15.66;

    printf("Printing of integer constant: %d\n", int_const);
    printf("Printing of char constant: %c\n", char_const);
    printf("Printing of float constant: %f\n", float_const);
    printf("Priting of preprocessor constant: %.2f\n", PI);

    // Defining an inteher constant.
    const int var = 10;
    printf("Initial value of constant: %d\n", var);
    // Defining a pointer to that const variable.
    int *ptr = (int *)&var;

    *ptr = 500;

    printf("Final value of constant: %d\n", var);
    printf("Acessing through pointer: %d\n", *ptr);

    test();
    return 0;
}