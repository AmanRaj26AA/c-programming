#include <stdio.h>

int main() {
    int r, c;

    // Input number of rows and columns
    printf("Enter number of rows of the matrix: ");
    scanf("%d", &r);
    printf("Enter number of columns of the matrix: ");
    scanf("%d", &c);

    int a[r][c];

    // Input matrix elements
    printf("Enter elements of the %dx%d matrix:\n", r, c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Display original matrix
    printf("Original matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Transpose and display the matrix
    printf("transpose matrix:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
         printf("%d ",a[j][i]);
        }
        printf("\n");
    }

    return 0;
}
