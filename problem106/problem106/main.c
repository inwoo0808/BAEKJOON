//
//  main.c
//  problem106
//
//  Created by 오인우 on 2023/02/18.
//

#include<stdio.h>
 
int house[20][20];
int N, cnt;
int direct[3][2] = { {0,1},{1,1},{1,0} };
 
void move(int a, int b, int state) {
    int i;
 
    if (state == 1 && (house[a - 1][b] == 1 || house[a][b - 1] == 1))
        return;
 
    if (a == N - 1  && b == N - 1) {
        cnt++;
        return;
    }
    
    if (b >= N || a >= N || house[a][b] == 1)
        return;
 
    switch (state) {
    case 0:
        for (i = 0; i < 2; i++)
            move(a + direct[i][0], b + direct[i][1], i);
        break;
    case 1:
            for (i = 0; i < 3; i++)
            move(a + direct[i][0], b + direct[i][1], i);
        break;
    case 2:
        for (i = 1; i < 3; i++)
            move(a + direct[i][0], b + direct[i][1], i);
        break;
    }
}
 
int main() {
    scanf("%d", &N);
 
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &house[i][j]);
        }
    }
 
    if (house[N - 1][N - 1] == 1) {
        printf("%d\n", 0);
        return 0;
    }
 
    move(0, 1, 0);
    
    printf("%d\n", cnt);
 
    return 0;
}
