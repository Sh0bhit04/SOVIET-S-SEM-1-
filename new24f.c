// wap to check whether the number is armstrong number
#include <stdio.h>
#include <math.h>

int main() {
    int number, temp, remainder, sum = 0, n = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;
    // Count number of digits
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    temp = number;
    // Calculate sum of powered digits
    while (temp != 0) {
        remainder = temp % 10;
        sum += (int)pow(remainder, n);
        temp /= 10;
    }

    if (sum == number)
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}
