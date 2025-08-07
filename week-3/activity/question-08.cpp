#include <stdio.h>

int main() {
    int i, j, k;
    int mat[3][3];
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Digite o valor da posicao %d, %d: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d", mat[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
