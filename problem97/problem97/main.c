//
//  main.c
//  problem97
//
//  Created by 오인우 on 2023/02/11.
//

#include <stdio.h>

int input[101];
int dp[10001];

int MIN(int x, int y)
{
    if (x == 0)
        return y;
    else if (y == 0)
        return x;
    return x < y ? x : y;
}

int main() {

    int n, k;
    
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++)
        scanf("%d", &input[i]);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            for (int u = 1; u <= k; u++) {
                if (j < u*input[i])
                    break;
                if (dp[j - u * input[i]] == 0)
                    if (j - u * input[i] != 0)
                        break;
                dp[j] = MIN(dp[j], dp[j - u * input[i]] + u);
            }
        }
    }

    if (dp[k]==0)
        printf("%d", -1);
    else
        printf("%d", dp[k]);

    return 0;
}
