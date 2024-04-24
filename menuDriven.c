#include <stdio.h>

void addMatrix(int A[2][2], int B[2][2]) {
    int result[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("Result of addition:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrix(int A[2][2], int B[2][2]) {
    int result[2][2] = {0};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("Result of multiplicationdgdgdg:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

void subtractMatrix(int A[2][2], int B[2][2]) {
    int result[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
    printf("Result of subtraction:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int A[2][2]) {
    int result[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[j][i] = A[i][j];
        }
    }
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int choice;
    int A[2][2];
    int B[2][2];
    
    printf("Enter elements of matrix A (2x2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of matrix B (2x2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    printf("1. Addition\n");
    printf("2. Multiplication\n");
    printf("3. Subtraction\n");
    printf("4. Transpose\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            addMatrix(A, B);
            break;
        case 2:
            multiplyMatrix(A, B);
            break;
        case 3:
            subtractMatrix(A, B);
            break;
        case 4:
            transposeMatrix(A);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
