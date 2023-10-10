#include <stdio.h>

int main() {
    int s[10][10], m, n, count = 0, k = 0;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &m, &n);

    printf("Enter the elements of the matrix:\n");
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &s[i][j]);
            if (s[i][j] != 0)
                count++;
        }
    }

    printf("Matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }

    int tuple[count][3];

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (s[i][j] != 0) {
                tuple[k][0] = i;
                tuple[k][1] = j;
                tuple[k][2] = s[i][j];
                k++;
            }
        }
    }
    printf("Tuple elements are:\n");
    for (i = 0; i < count; i++) {
        for (j = 0; j < 3; j++)
            printf("%d ", tuple[i][j]);
        printf("\n");
    }

    return 0;
}
