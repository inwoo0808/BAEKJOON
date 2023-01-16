//
//  main.c
//  problem5
//
//  Created by 오인우 on 2021/08/26.
//

#include<stdio.h>
int main()
{
    int N, X, input;

    scanf("%d %d", &N, &X);

    for(int i = 0; i < N; i++){
        scanf("%d", &input);
      
        if(X > input)
            printf("%d ", input);
    }
}
