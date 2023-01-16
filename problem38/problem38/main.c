//
//  main.c
//  problem38
//
//  Created by 오인우 on 2022/01/20.
//

#include <stdio.h>

int main()
{
    int x, y;
    int ax, ay;
    int bx, by;
    int cx, cy;
    
    scanf("%d %d", &ax, &ay);
    scanf("%d %d", &bx, &by);
    scanf("%d %d", &cx, &cy);
    
    if(ax == bx)
        x = cx;
    else if(ax == cx)
        x = bx;
    else
        x = ax;
    
    if(ay == by)
        y = cy;
    else if(ay == cy)
        y = by;
    else
        y = ay;
    
    printf("%d %d\n", x, y);
    
}
