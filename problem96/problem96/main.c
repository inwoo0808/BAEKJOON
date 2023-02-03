//
//  main.c
//  problem96
//
//  Created by 오인우 on 2023/02/03.
//

#include <stdio.h>
#include <string.h>

int map[500][500] = {0};
int dp[500][500] = {0};
int hh[4] = {-1, 1, 0, 0};
int ww[4] = {0, 0, -1, 1};
int h, w;

int dspdp(int y, int x, int max)
{
    if(dp[y][x] != -1) return dp[y][x];
    if((y == h-1) && (x == w-1)) return 1;
    
    dp[y][x] = 0;
    
    for(int i = 0; i < 4; i ++)
    {
        if(max > map[y + hh[i]][x + ww[i]] && y + hh[i] < h && x + ww[i] < w
           &&(y + hh[i]) >= 0 && (x + ww[i]) >= 0){
            dp[y][x] += dspdp(y + hh[i], x + ww[i], map[y + hh[i]][x + ww[i]]);
           }
    }
                     
    return dp[y][x];
}

int main()
{
   memset(dp, -1, sizeof(dp));
   scanf("%d %d", &h, &w);
                     
   for(int i = 0; i < h; i++){
       for(int j = 0; j < w; j ++){
           scanf("%d", &map[i][j]);
       }
     }
}
