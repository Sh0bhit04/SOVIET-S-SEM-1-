// by using for loop
#include <stdio.h>

int main() {
    int number, temp, reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    for (temp = number; temp != 0; temp /= 10)
        reversed = reversed * 10 + temp % 10;

    if (number == reversed)
        printf("%d is a palindrome number.\n", number);
    else
        printf("%d is not a palindrome number.\n", number);
    return 0;
}
