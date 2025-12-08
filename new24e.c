// wap to print first and last digit of the given number
#include <stdio.h>

int main() {
    int number, last, first;
    printf("Enter a number: ");
    scanf("%d", &number);

    int temp = number;
    last = temp % 10;  // Get last digit

    // Find first digit
    while (temp >= 10 || temp <= -10) {
        temp /= 10;
    }
    first = temp;  // First digit (handles negatives)

    printf("First digit: %d\n", first);
    printf("Last digit: %d\n", last);
    return 0;
}
