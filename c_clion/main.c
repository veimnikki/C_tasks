#include <stdio.h>

int main() {
    int N = 6;
    int mas[] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < N; i++) {
        if (i == N-1) {
            printf("%d", mas[i]);
        } else {
            printf("%d, ", mas[i]);
        }
    }
    return 0;
}
