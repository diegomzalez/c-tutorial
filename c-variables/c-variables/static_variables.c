// C program to illustatre the static variable lifetime.
#include <stdio.h>

// Function with static variable
int fun()
{
    static int count = 0;
    count++;
    return count;
}

int main()
{
    printf("%d \n", fun());
    printf("%d \n", fun());
    return 0;
}