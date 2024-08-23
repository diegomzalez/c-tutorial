// A C program to demostrate different storage
// classes.
#include <stdio.h>

// Declaring the variable which is to be made extern
// an initial value can also be initialized to x.
int x;

void autoStorageClass(void)
{
    printf("\nDemostrating auto class\n\n");

    // Declaring an auto variable (simply
    // writing "int a=32;" works as well)
    auto int a = 32;

    // printing the auto variable 'a'.
    printf("Value of the variable 'a' declared as auto: %d\n", a);
    printf("--------------------------------");
}

void registerStoreageClass(void)
{
    printf("\nDemostrating register class\n\n");

    // Declaring a register vairable.
    register char b = 'G';

    // Printing the register variable 'b'.
    printf("value of the variable 'b' declared aas register: %d\n", b);
}

void externStorageClass(void)
{
    printf("\nDemostrating extern class\n\n");

    // Telling the compiler that the variable
    // x is an extern variable and has been
    // defined elsewhere (above the main
    // function)
    extern int x;

    // Printing the extern variables 'x'.
    printf("Value of the variable 'x' declared as extern: %d\n", x);

    // Value of extern variable x modified
    x = 2;

    // printing the modified value of extern.
    printf("Modified value of the variable 'x' declared as exteren: %d\n", x);
    printf("--------------------------------");
}

void staticStorageClass(void)
{
    int i = 0;

    printf("\nDemostrating static class\n\n");

    // Using a static variable 'y'.
    printf("Declaring 'y' as static inside the loop.\n"
           "But this declaration will occur only"
           "once as 'y' is static.\n"
           "If not, then every time the value of 'y' will be the declared value 5"
           " as in the case of variable 'p'\n");
    printf("\nLoop started:\n");

    for (i = 1; i < 5; i++)
    {
        // Declaring the static variable 'y'.
        static int y = 5;

        // Declare a non-static variable 'p'.
        int p = 10;

        // Incrementing the value of y and p by 1.
        y++;
        p++;

        // Printing value of y at each iteration.
        printf("\nThe value of 'y', "
               "declared as static, in %d "
               "interation is %d\n",
               i, y);
        // Printing value of p at each iteration.
        printf("The value of non-static variable 'p', "
               "in %d iteration is %d\n",
               i, p);
    }

    printf("\nLoop ended:\n");
    printf("--------------------------------");
}

int main(void)
{
    printf("A program to demostrate"
           " Storage Classes in C\n\n");

    // To demostrate auto Storage Class.
    autoStorageClass();

    // To demostrate register Storage Class.
    registerStoreageClass();

    // To demostrate extern Storage Class.
    externStorageClass();

    // To demostarte static Storage Class.
    staticStorageClass();

    // Exiting.
    printf("\n\nStorage Classes demostrated.\n");
    return 0;
}