//
//  main.c
//  problem8
//
//  Created by 오인우 on 2021/08/31.
//

#include <stdio.h>

int main()
{
    int num, result;
    int A, B, C, D;
    int count = 0;
    
    scanf("%d", &num);
    result = num;
    
    while(1)
    {
        A = num / 10;
        B = num % 10;
        C = (A + B) % 10;
        D = (B % 10) + C;
        num = D;
        count++;
        if(D == result)
            break;
    }
    
    printf("%d", count);
}
