//
//  main.c
//  problem26
//
//  Created by 오인우 on 2022/01/10.
//

#include <stdio.h>

int main()
{
    int A, B, V;
    int day;
    
    scanf("%d %d %d", &A, &B, &V);
    
    day = (V - B - 1) / (A - B) + 1;
    
    printf("%d", day);
    
 }
