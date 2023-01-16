//
//  main.c
//  problem54
//
//  Created by 오인우 on 2022/02/03.
//

#include <stdio.h>
 
int arr[10001];
 
int main(void) {
    int N = 0;
    int num = 0;
 
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        arr[num]++;
    }
 
    for (int i = 1; i <= 10000; i++) {
        for (int j = 0; j < arr[i]; j++) {
            printf("%d\n", i);
        }
    }
 
}
