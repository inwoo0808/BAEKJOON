//
//  main.c
//  problem109
//
//  Created by 오인우 on 2023/02/23.
//

#include <stdio.h>

#define INF 999999999;
#define min(a,b)  (((a) < (b)) ? (a) : (b))
int N, r, c;
int mat[501][2];
long long dp[501][501];

int main(){
    scanf("%d", &N);
    
    for(int i = 1; i <= N; i++){
        scanf("%d %d", &r, &c);
        mat[i][0] = r;
        mat[i][1] = c;
    }
    
    for(int i = 1; i <= N - 1; i++){
        for(int j = 1; j <= N; j++) dp[i][j] = INF;
        dp[i][i] = 0;
    }
    
    for(int i = 1; i <= N-1; i++){
        dp[i][i + 1] = mat[i][0] * mat[i][1] * mat[i + 1][1];
    }
    
    for(int len = 2; len < N; len++){
        for(int i = 1; i <= N; len++){
            int j = i + len;
            for(int k = i; k < j; k++)
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + mat[i][0] * mat[k + 1][0] * mat[j][1]);
            }
    }
    
    printf("%lld", dp[1][N]);
    
    return 0;
}
