//
//  main.c
//  problem94
//
//  Created by 오인우 on 2023/02/02.

#include <stdio.h>

int main()
{
    int n = 0;
    int dp[1001] = {0};
    int tmp[1001] = {0};
    int max = 1;
    scanf("%d", &n);
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &tmp[i]);
        dp[i] = 1;
        for(int j = 0; j<i; j++)
        {
            if(tmp[j] > tmp[i])
            {
                if(dp[i] < dp[j]+1)
                {
                    dp[i] = dp[j]+1;
                    if(max < dp[i])
                    max = dp[i];
                }
            }
        }
    }
    printf("%d", max);
    
    return 0;
}
