// C program to show use
// of break and continue.
#include <stdio.h>

// Driver code
int main(void)
{
    for (int i = 0; i <= 10; i++)
    {
        if (i == 2)
        {
            continue;
        }
        if (i == 6)
        {
            break;
        }
        printf("%d ", i);
    }
    return 0;
}