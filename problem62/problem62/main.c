//
//  main.c
//  problem62
//
//  Created by 오인우 on 2022/02/14.
//

#include <stdio.h>

int n,m;
int result[1000];
int check[1000];

void DFS(int depth)
{
    int i;
    
    if(depth==m)
    {
        for(int i=0;i<m;i++)
            printf("%d ",result[i]);
        printf("\n");
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            if(check[i]==0)
            {
                result[depth]=i;
                check[i]=1;
                DFS(depth+1);
                check[i]=0;
            }
        }
    }
}

int main()
{
    scanf("%d %d",&n,&m);
    DFS(0);
}
