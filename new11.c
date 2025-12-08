// Write a program that prints the full color name based on the first letter input by the user using a switch statement
#include<stdio.h>
int main()
{
    char color;
    printf("Enter the first letter of the color:");
    scanf(" %c", &color);
    switch(color)
    {
        case 'R':
        case 'r':
            printf("Red");
            break;
        case 'G':
        case 'g':
            printf("Green");
            break;
        case 'B':
        case 'b':
            printf("Brown");
            break;
        case 'Y':
        case 'y':
            printf("Yellow");
            break;
        case 'C':
        case 'c':
           printf("Cyan");
           break;
        default:
           printf("Invalid color name");
    }
     return 0;
}