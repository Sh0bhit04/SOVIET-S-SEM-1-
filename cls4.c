// Write a C program to read two integers from the user, calculate their sum, and display the result
#include<stdio.h>
int main ()
{
    int x, y, z;
    printf("Enter two integers");
    scanf("%d %d", &x, &y);
    z = x + y;
    printf("The sum of %d and %d = %d", x,y,z);
    return 0;
}
