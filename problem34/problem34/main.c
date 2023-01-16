//
//  main.c
//  problem34
//
//  Created by 오인우 on 2022/01/15.
//

#include <stdio.h>

int main()
{
    int N, i, j;
    
    scanf("%d", &N);
    
    for(i = 2; i <= N; i++)
    {
        while(N % i == 0)
        {
            printf("%d\n", i);
            N /= i;
        }
    }
}
