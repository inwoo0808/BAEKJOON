//
//  main.c
//  problem43
//
//  Created by 오인우 on 2022/01/24.
//

#include <stdio.h>
 
int fact(int n) {
    if (n > 1)
        return n * fact(n - 1);
    else return 1;
}
 
int main() {
    int N;
    scanf("%d", &N);
    printf("%d\n", fact(N));
}
