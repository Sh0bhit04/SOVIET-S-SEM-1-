// Write a C program to find and print the sum of the first 10 natural numbers using a while loop
#include <stdio.h>
int main()
{
    int spoint = 0, i = 1;
    while(i<=10)
    {
        spoint+=i;
        i++;
    }
    printf("Sum of first 10 n-natural number is %d\n", spoint);
    return 0;
}