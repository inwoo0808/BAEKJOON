//
//  main.c
//  problem10
//
//  Created by 오인우 on 2021/08/31.
//

#include <stdio.h>

int main()
{
    int arr[9], max = 0, index;
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
        {
            max= arr[i];
            index = i;
        }
    }
    printf("%d\n%d", max, index + 1);
}
