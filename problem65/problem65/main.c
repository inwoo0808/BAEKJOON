//
//  main.c
//  problem65
//
//  Created by 오인우 on 2022/02/14.
//
//

#include <stdio.h>

int Arr[8] = { 0, };

void Rper(int N, int M, int d){
    for (int i = 1, k; i <= N; i++) {
        if (d == 0) Arr[d] = i;
        else {
            for (k = 0; k < d; k++) {
                if (Arr[k] > i) break;
            }
            if (k == d) Arr[d] = i;
            else continue;
        }
        
        if (M == d + 1) {
            for (int n = 0; n < M; n++)
                printf("%d ", Arr[n]);
            printf("\n");
        }
        else Rper(N, M, d + 1);
    }
}

int main()
{
    int N, M;
    
    scanf("%d%d", &N, &M);

    Rper(N, M, 0);

}
