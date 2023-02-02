//
//  main.c
//  problem90
//
//  Created by 오인우 on 2023/02/02.
//

#include <stdio.h>
#include <stdlib.h>

int compare(int a, int b) {
    return (a > b) ? a : b;
}

int main(void) {
    int num, i, j, result = 0, max = 0;
    int arr[1001] = { 0 };
    int dp1[1001] = { 0 };
    int dp2[1001] = { 0 };
    
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 1; i <= num; i++) {
        max = 0;
        for (j = 0; j < i; j++) {
            if (arr[i] > arr[j]) {
                if (dp1[j] > max) {
                    max = dp1[j];
                }
            }
        }
        dp1[i] = max + 1;
    }

    for (i = num; i > 0; i--) {
        max = 0;
        for (j = num; j > i; j--) {
            if (arr[i] > arr[j]) {
                if (dp2[j] > max) {
                    max = dp2[j];
                }
            }
        }
        dp2[i] = max + 1;
    }

    for (i = 1; i <= num; i++) {
        if (result < dp1[i] + dp2[i] - 1) {
            result = dp1[i] + dp2[i] - 1;
        }
    }

    printf("%d", result);
}
