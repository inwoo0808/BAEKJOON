//
//  main.c
//  problem102
//
//  Created by 오인우 on 2023/02/18.
//

#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    if (n % 2 == 1)
        printf("SK\n");
    else
        printf("CY\n");
    return 0;
}
