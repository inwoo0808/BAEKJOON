//
//  main.c
//  problem63
//
//  Created by 오인우 on 2022/02/14.
//

#include <stdio.h>

int n,m;

int arr[10];

void seq(int x,int len){
    if(len == m){
        for(int i = 0; i < m;i++)
            printf("%d ", arr[i]);
        printf("\n");
        return;
    }

    for(int i = x; i <= n;i++){
        arr[len] = i;
        seq(i + 1, len + 1);
    }

    return;
}

int main()
{
    scanf("%d %d",&n,&m);

    seq(1,0);
}
