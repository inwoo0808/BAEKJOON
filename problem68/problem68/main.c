//
//  main.c
//  problem68
//
//  Created by 오인우 on 2022/02/21.
//

#include <stdio.h>
#include <stdlib.h>

void fibo(int num) {
    long long a = 1, b = 1, c;
    for (int i = 1; i < num; i++) {
        c = (a + b) % 15746;
        a = b;
        b = c;
    }
    printf("%lld", b);
}

int main()
{
    int num;
    scanf("%d", &num);
    fibo(num);
}
