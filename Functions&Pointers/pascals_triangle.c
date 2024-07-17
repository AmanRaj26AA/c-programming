#include <stdio.h>

int main() {
    int rows, coef = 1;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {1
        // Print spaces for alignment
        for (int space = 1; space <= rows - i; space++)
            printf("  ");

        for (int j = 0; j <= i; j++) {
            // Calculate next coefficient
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;

            // Print the current coefficient with spacing
            printf("%4d", coef);
        }

        // Move to the next line for the next row
        printf("\n");
    }

    return 0;
}

