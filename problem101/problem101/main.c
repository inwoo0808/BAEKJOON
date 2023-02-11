//
//  main.c
//  problem101
//
//  Created by 오인우 on 2023/02/11.
//

#include <stdio.h>
#include <stdlib.h>

int compare(int a, int b) {
    return (a > b) ? a : b;
}

int main(void) {
    int num, i, j, result = 0, max = 0, prev = 0;
    int arr[501] = { 0 };
    int dp[501] = { 0 };
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        scanf("%d", &j);
        scanf("%d", &arr[j]);
    }

    for (i = 1; i <= 500; i++) {
        if (arr[i] != 0){
            max = 0;
            for (j = 0; j < i; j++) {
                if (arr[i] > arr[j]) {
                    if (dp[j] > max) {
                        max = dp[j];
                    }
                }
            }
            dp[i] = max + 1;
            result = compare(result, dp[i]);
        }
    }
    printf("%d", num-result);
}
