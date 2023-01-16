//
//  main.c
//  problem32
//
//  Created by 오인우 on 2022/01/13.
//

#include <stdio.h>
 
int main() {
    int N, num, cnt = 0;
    scanf("%d", &N);
 
    int i;
    while (N--) {
        scanf("%d", &num);
      
        for (i = 2; i < num; i++) {
            if (num % i == 0) break;
        }
        if (i == num) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
