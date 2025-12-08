
// Write a program to print a left-aligned triangle star pattern using nested loops
#include <stdio.h>
int main()
{
    int rows;
    printf("Enter the values of rows: ");
    scanf("%d", &rows);
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}