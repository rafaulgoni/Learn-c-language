#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// int main() {
//     int N, M;
//     scanf("%d %d", &N, &M);
//     if (N != M) {
//         printf("NO\n");
//         return 0;
//     }
//     int matrix[N][M];
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             if ((i == j || i + j == N - 1) && matrix[i][j] != 1) {
//                 printf("NO\n");
//                 return 0;
//             }
//             if (i != j && i + j != N - 1 && matrix[i][j] != 0) {
//                 printf("NO\n");
//                 return 0;
//             }
//         }
//     }
//     printf("YES\n");
//     return 0;
// }

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        long long M, A, B, C;
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);
        long long product = A * B * C;

        if (product == 0) {
            if (M == 0) {
                printf("0\n");
            } else {
                printf("-1\n");
            }
        } else {

            if (M % product == 0) {
                printf("%lld\n", M / product);
            } else {
                printf("-1\n");
            }
        }
    }
    
    return 0;
}
