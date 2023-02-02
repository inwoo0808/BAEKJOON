//
//  main.c
//  problem89
//
//  Created by 오인우 on 2023/02/02.
//

#include <stdio.h>

int main() {
    long long arr[11] = {1,2,3,4,5,6,7,8,9,10};
    int n;
    int m = 0;
    scanf("%d", &n);
    
    if(n == 1) {
        printf("10");
        return 0;
    }
    
    for(int j = 0; j < n - 2; j++) {
    for(int i = 1; i < 10; i++) {
        arr[0] = 1;
        arr[i] = (arr[i - 1] + arr[i]) % 10007;
    }
    }
    
    for(int i = 0; i < 10; i++) {
        m += arr[i];
    }
    
    m %= 10007;
    printf("%d", m);
    
    return 0;
}
