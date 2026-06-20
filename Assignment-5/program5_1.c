#include <stdio.h>
int SumOfDigits(int num) {
    int sum = 0;
    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        sum += num % 10; 
        num /= 10;       
    }   
    return sum;
}
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    int totalSum = SumOfDigits(number);
    printf("The sum of the digits is: %d\n", totalSum);
    return 0;
}

