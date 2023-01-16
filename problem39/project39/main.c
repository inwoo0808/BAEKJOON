//
//  main.c
//  project39
//
//  Created by 오인우 on 2022/01/20.
//

#include <stdio.h>
int main()
{
    long n1, n2, n3;
    
    while(1) {
        long num1, num2, num3;
        scanf("%ld %ld %ld", &n1, &n2, &n3);
        if(n1 == 0 && n2 == 0 && n3 == 0) break;
        num1 = n1 * n1, num2 = n2 * n2, num3 = n3 * n3;
        if(num1 + num2 == num3 || num1 + num3 == num2 || num2 + num3 == num1) printf("right\n");
        else printf("wrong\n");
        
    }
    
}


