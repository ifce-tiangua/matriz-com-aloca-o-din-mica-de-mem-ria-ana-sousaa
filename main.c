#include <stdio.h>
#include <stdlib.h>

int main() {
    int l, c;

    scanf("%d %d", &l, &c);

    if (l == 0 || c == 0) {
        printf("[matriz vazia]\n");
        return 0;
    }

    int **matriz = (int **)malloc(l * sizeof(int *));
    if (matriz == NULL) {
        return 1;
    }

    for (int i = 0; i < l; i++) {
        matriz[i] = (int *)malloc(c * sizeof(int));
        if (matriz[i] == NULL) {
            return 1;
        }
    }

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < l; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}