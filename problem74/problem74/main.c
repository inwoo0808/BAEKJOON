//
//  main.c
//  problem74
//
//  Created by 오인우 on 2022/02/24.
//

#include <stdio.h>
#include <stdlib.h>

long DP[101][11];

int compare(int a, int b) {
    return (a <= b) ? a : b;
}

int main() {
    int num, i;
    long sum;
    
    scanf("%d", &num);
    
    for (i = 1; i <= 9; i++) {
        DP[1][i] = 1;
    }

    for (i = 2; i <= num; i++) {
        DP[i][0] = DP[i - 1][1];
        for (int j = 1; j <= 9; j++) {
            DP[i][j] = (DP[i - 1][j - 1] + DP[i - 1][j + 1]) % 1000000000;
        }
    }
    
    sum = 0;

    for (i = 0; i < 10; i++) {
        sum += DP[num][i];
    }

    printf("%d\n", sum % 1000000000);

}
