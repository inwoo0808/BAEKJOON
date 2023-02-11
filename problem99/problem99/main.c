//
//  main.c
//  problem99
//
//  Created by 오인우 on 2023/02/11.
//

#include <stdio.h>
#define max(x, y) (x) > (y) ? (x) : (y)

int M, N;
int dp[1001][1001];

int main(){
    scanf("%d %d", &N, &M);
    
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= M; j++){
            scanf("%d", &dp[i][j]);
        }
    }
    
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= M; j++){
            dp[i][j] += max(max(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]);
        }
    }
    
    printf("%d", dp[N][M]);
    
    return 0;
}
