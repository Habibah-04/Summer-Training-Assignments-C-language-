#include <stdio.h>
int main() {
    int arr[100];
    int size, i;
    int sum=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++) {
        sum=sum+arr[i];
    }
    printf("Sum of elements = %d", sum);
    return 0;
}

