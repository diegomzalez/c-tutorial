// C program to demostrate
// do-while keyword.
#include <stdio.h>

// Driver code
int main(void)
{
    int i = 1;
    do
    {
        printf("%d", i);
        i++;
    } while (i <= 5);
    printf("\n");
    return 0;
}