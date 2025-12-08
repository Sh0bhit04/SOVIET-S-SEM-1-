// Write a C program that takes two numbers as input, then for every number between the starting value (spoint) and ending value (epoint), print half of the odd numbers in that range
#include<stdio.h>
int main()
{
    int spoint, epoint, even;
    printf("Enter the value of spoint and epoint");
    scanf("%d %d", &spoint, &epoint);
    if(spoint!=0)
    {
        spoint++;
    }
    int num = spoint;
    while (spoint<=epoint)
    even = spoint%2;
    {
      printf("Half of the %d is %d\n", num, num/2);
      num+=2;
    }
    return 0;
}