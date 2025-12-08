// usin do while loop
#include <stdio.h>

int main() {
    int number, temp, reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;
    if (temp == 0)
        reversed = 0;
    else {
        do {
            reversed = reversed * 10 + temp % 10;
            temp /= 10;
        } while (temp != 0);
    }

    if (number == reversed)
        printf("%d is a palindrome number.\n", number);
    else
        printf("%d is not a palindrome number.\n", number);
    return 0;
}
