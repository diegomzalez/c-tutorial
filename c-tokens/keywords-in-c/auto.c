// C program to demostrate
// auto keyword
#include <stdio.h>

void print_value()
{
    auto int a = 10;
    printf("%d", a);
}

// Driver code

int main(void)
{
    print_value();
    return 0;
}