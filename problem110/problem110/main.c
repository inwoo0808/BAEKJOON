//
//  main.c
//  problem110
//
//  Created by 오인우 on 2023/02/23.
//

#include <stdio.h>
#define max(a, b) a > b ? a : b
int dp[1001][1001];
char str[2][1001];
void LCS(int j, int i){
    if (dp[j][i])
        if (str[0][i-1] == str[1][j-1]){
            LCS(j-1, i-1);
            printf("%c", str[0][i-1]);
        }else dp[j-1][i] > dp[j][i-1] ? LCS(j-1, i) : LCS(j, i-1);
}
int main(){
    scanf("%s %s", &str[0], &str[1]);
    int i, j;
    for (i = 0; str[0][i]; i++)
        for (j = 0; str[1][j]; j++)
            if (str[0][i] == str[1][j]) dp[j+1][i+1] = dp[j][i] +1;
            else dp[j+1][i+1] = max(dp[j][i+1], dp[j+1][i]);
            
    printf("%d\n", dp[j][i]);
    LCS(j, i);
}
