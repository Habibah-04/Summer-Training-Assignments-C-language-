#include <stdio.h>
int findFactorial(int n) {
    int fact = 1,i;
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}
int main() {
    int num;
    int factorial;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Error: Factorial of a negative number does not exist.\n");
    } else {
        factorial = findFactorial(num);
        printf("Factorial of %d = %d\n", num, factorial);
    }
    return 0;
}


