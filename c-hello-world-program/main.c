// Simple C program to display "Hello, World!"

// Header file for input and output functions.
#include <stdio.h>

#define HELLO_WORLD() printf("Macro that prints: Hello, World!\n")

void print_hello_world(void)
{
    printf("Function that prints: Hello, World!\n");
}

// Main function: entry point for execution
int main(void)
{
    printf("Hello, World!\n");
    print_hello_world();
    HELLO_WORLD();
    write(1, "System call that prints: Hello, World!\n", 40);
    printf("Multiple print statements that prints: Hello, ");
    printf("World!\n");
    char *str = "Using Character-by-Chareacter printing: Hello, World!\n";
    while (*str)
    {
        putchar(*str++);
    }
    puts("Using puts() Function to print: Hello, World!");
    return 0;
}