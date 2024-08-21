// C program to illustrate the identifiers.
#include <stdio.h>

struct _student
{
    int id;
    int class;
    char section;
};

// is_even identifier is used to call the bellow
// function.
void is_even(int num)
{
    if (num % 2 == 0)
    {
        printf("It is an Even Number");
    }
    else
    {
        printf("It is an Odd Number");
    }
}

int main(void)
{
    // Identifiers used as variable names.
    int student_age = 20;
    double Marks = 349.50;

    // Calling is_even function.
    is_even(453);
}