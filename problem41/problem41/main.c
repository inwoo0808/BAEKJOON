//
//  main.c
//  problem41
//
//  Created by 오인우 on 2022/01/24.
//

#include <stdio.h>
#define PI 3.14159265359
int main()
{
    int r;
    double result1, result2;
    
    scanf("%d", &r);
    
    result1 = (double)r * r * PI;
    result2 = (double)r * r * 2;
   
    printf("%.6lf\n%.6lf", result1, result2);
}

