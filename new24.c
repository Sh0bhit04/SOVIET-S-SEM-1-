// Write a C program using a function to count the number of digits in an integer (using logarithm) and display the digit count
#include<stdio.h>
#include <math.h>
#include <stdlib.h>
int countdigit(int absnum){
    int zero = (absnum == 0);
    int countdigit = (int) log10(absnum + zero) + 1;
    return countdigit;
}
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    printf("Number of digit in %d is %d\n", number, countdigit(abs(number)));
    return 0;
}