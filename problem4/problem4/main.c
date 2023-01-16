//
//  main.c
//  problem4
//
//  Created by 오인우 on 2021/08/26.
//

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j) {
            printf(" ");
        }
        for (int j = 1; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }
   
}
