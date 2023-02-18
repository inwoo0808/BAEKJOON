//
//  main.c
//  problem105
//
//  Created by 오인우 on 2023/02/18.
//

#include <stdio.h>

int main(void) {
    int arr[1002][2];
    int brr[1002];
    int n, a = 0, temp = 0, max = 0, o = 1;;

    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i][0]);
        arr[i][1] = 1;
    }
    if(n == 1) {
        printf("%d\n%d", 1, arr[0][0]);
        return 0;
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            if(arr[i][0] > arr[i - j][0] && arr[i][1] <= arr[i - j][1]) {
                arr[i][1] = arr[i - j][1] + 1;
            }
            if(arr[i][0] == arr[i - j][0] && arr[i][1] <= arr[i - j][1]) {
                arr[i][1] = arr[i - j][1];
            }
        }
    }
    for(int i = n - 1; i > 0; i--) {
        if(max < arr[i][1]) {
            max = arr[i][1];
        }
    }
    printf("%d\n", max);
    
    for(int i = 1; i <= n; i++) {
        if(arr[n - i][1] == max) {
            brr[temp] = arr[n - i][0];
            max--;
            temp++;
        }
    }
    for(int i = temp - 1; i >= 0; i--) printf("%d ", brr[i]);

    return 0;
}
