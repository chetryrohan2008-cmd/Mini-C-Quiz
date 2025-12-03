#include <stdio.h>

int main() {
    int row, col;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    int a[row][col], b[row][col], sum[row][col];

    // Input first matrix
    printf("\nEnter elements of Matrix A:\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("\nEnter elements of Matrix B:\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Add the matrices
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Print result
    printf("\nSum of the two matrices:\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
