// C program to demostrate the memory Layout of C
#include <stdio.h>
#include <stdlib.h>

int global;

int main(void)
{
    int *arr = (int *)calloc(5, sizeof(int));
    static int i = 10;
    return 0;
}
