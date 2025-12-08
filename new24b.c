// wap to check whether the number is palindrome
#include <stdio.h>

int main() {
    int number, temp, reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;
    while (temp != 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }

    if (number == reversed)
        printf("%d is a palindrome number.\n", number);
    else
        printf("%d is not a palindrome number.\n", number);

    return 0;
}
