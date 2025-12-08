// Write a C program to print a right-angled number triangle pattern using nested loops
#include <stdio.h>
int main()
{
    int a = 3, i, j;
    for(i=1; i<=a; i++)
    {
      for(j=1; j<=i; j++)
      {
        printf("%d", j);
      }
      printf("\n");
    }
    
    return 0;
}