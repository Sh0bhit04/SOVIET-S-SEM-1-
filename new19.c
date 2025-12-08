// Write a C program to print a right-angled triangle pattern of numbers using nested loops
#include <stdio.h>
int main()
{
    int row, i, j, num = 1;
    printf("Enter the number of row: ");
    scanf("%d", &row);
    printf("\nRight angled triangle patter:\n");
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}