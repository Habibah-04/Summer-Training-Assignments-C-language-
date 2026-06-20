#include <stdio.h>
int main() {
    int r, c, i, j;
    int a[100][100], b[100][100], diff[100][100];
    printf("Enter the number of rows (1-100): ");
    scanf("%d", &r);
    printf("Enter the number of columns (1-100): ");
    scanf("%d", &c);
    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter elements of 2nd matrix:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("Enter element b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("\nDifference of the two matrices:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }
    return 0;
}

