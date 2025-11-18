//Q74: Find the transpose of a matrix.

#include <stdio.h>
int main() {

    int rows, cols;
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int tp[cols][rows];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            tp[j][i] = matrix[i][j];
        }
    }
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", tp[i][j]);
        }
        printf("\n");
    }
    return 0;
}
