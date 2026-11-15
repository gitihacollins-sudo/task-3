#include <stdio.h>

#define MAX_DIMENSION 10
#define MAX_NONZERO (MAX_DIMENSION * MAX_DIMENSION)

int main(void)
{
    int matrix[MAX_DIMENSION][MAX_DIMENSION];
    int sparse[MAX_NONZERO + 1][3];
    int rows;
    int columns;
    int nonzero = 0;
    int i;
    int j;

    printf("Enter number of rows and columns (1 to %d): ", MAX_DIMENSION);
    if (scanf("%d %d", &rows, &columns) != 2
        || rows < 1 || rows > MAX_DIMENSION
        || columns < 1 || columns > MAX_DIMENSION) {
        printf("Invalid matrix dimensions.\n");
        return 1;
    }

    printf("Enter the matrix elements row by row:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid matrix element.\n");
                return 1;
            }
            if (matrix[i][j] != 0) {
                nonzero++;
                sparse[nonzero][0] = i;
                sparse[nonzero][1] = j;
                sparse[nonzero][2] = matrix[i][j];
            }
        }
    }

    sparse[0][0] = rows;
    sparse[0][1] = columns;
    sparse[0][2] = nonzero;

    printf("\nSparse matrix in triplet form (row column value):\n");
    printf("%d %d %d\n", sparse[0][0], sparse[0][1], sparse[0][2]);
    for (i = 1; i <= nonzero; i++) {
        printf("%d %d %d\n", sparse[i][0], sparse[i][1], sparse[i][2]);
    }

    return 0;
}
