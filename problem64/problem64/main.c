//
//  main.c
//  problem64
//
//  Created by 오인우 on 2022/02/14.
//

#include <stdio.h>

int Arr[7] = { 0, };

void Rcomb(int N, int M, int d) {
    
    for (int i = 1; i <= N; i++) {
        Arr[d] = i;
        if (M - 1 == d) {
            for (int k = 0; k < M; k++)
                printf("%d ", Arr[k]);
            printf("\n");
        }
        else Rcomb(N, M, d + 1);
    }
}

int main()
{
    int N, M;
    scanf("%d%d", &N, &M);

    Rcomb(N, M, 0);

}
