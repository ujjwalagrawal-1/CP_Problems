#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, K;
    scanf("%d", &N);
    int *array = (int *)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }
    scanf("%d", &K);
    int *result = (int *)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        result[i] = 0;
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i != j && abs(array[i] - array[j]) >= K) {
                result[i] = 1;
                break;
            }
        }
    }
    for (int i = 0; i < N; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    free(array);
    free(result);
    return 0;
}