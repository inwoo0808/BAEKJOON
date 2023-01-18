//
//  main.c
//  problem84
//
//  Created by 오인우 on 2023/01/18.
//

#include <stdio.h>

int main()
{
    int n, i;
    long long memo[91];
    scanf("%d", &n);
    
    memo[0] = 0;
    memo[1] = 1;
    memo[2] = 1;
    
    for(i = 3; i <= n; ++i){
        memo[i] = memo[i - 1] + memo[i - 2];
        
    }
    
    printf("%lld\n", memo[n]);
    
}
