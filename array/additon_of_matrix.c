#include <stdio.h>
int main() {
    int mat1[2][2], mat2[2][2], result[2][2];
    
    // Input for first matrix
    printf("Enter elements of first matrix (2x2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    // Input for second matrix
    printf("Enter elements of second matrix (2x2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    
    // Adding matrices
    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];     
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
