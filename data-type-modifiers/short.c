// C program to illustrate difference between short int
// and int.
#include <stdio.h>

int main(void) {
    int a;
    // Modify the int using short.
    short  b;
    // Print the size of a.
    printf("Size of a: %d\n", sizeof(a));
    // Print the size of b.
    printf("Size of b: %hd", sizeof(b));
    return 0;
}