//
//  main.c
//  problem3
//
//  Created by 오인우 on 2021/08/26.
//

#include <stdio.h>

int main(){
    int num, i, j;
    
    scanf("%d", &num);
    
    for(i = 1; i <= num; i++){
        for(j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}
