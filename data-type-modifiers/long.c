// C progam to illustrate size difference between int
// long int, dobule and long double.
#include <stdio.h>

int main(void)
{
    // Defining variables with long.
    int num;
    long int long_num;
    long long int long_long_num;
    double dub_num;
    long double long_dub_num;
    printf("Size of num: %hhd", sizeof(num));
    printf("\nSize of long_num: %hhd", sizeof(long_num));
    printf("\nSize of long_long_num: %hhd", sizeof(long_long_num));
    printf("\nSize of dub_num: %hhd", sizeof(dub_num));
    printf("\nSize of long_dub_num: %hhd", sizeof(long_dub_num));
    return 0;
}