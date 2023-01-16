//
//  main.c
//  problem44
//
//  Created by 오인우 on 2022/01/24.
//

#include <stdio.h>
 
int fibo(int n) {
    if (n >= 2)
        return fibo(n - 1) + fibo(n - 2);
    else if (n == 1) return 1;
    else return 0;
}
 
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", fibo(n));
}
