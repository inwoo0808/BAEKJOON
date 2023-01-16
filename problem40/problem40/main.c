//
//  main.c
//  problem40
//
//  Created by 오인우 on 2022/01/20.
//

#include <stdio.h>
int main()
{
    int x, y, w, h;
    
    scanf("%d %d %d %d", &x, &y, &w, &h);
    
    if(w - x > h - y) {
        if(h - y > x) printf("%d", (x > y) ? y : x);
        else if(h - y > y) printf("%d", (y > x) ? x : y);
        else printf("%d", h - y);
    }
    else {
        if(w - x > x) printf("%d", (x > y) ? y : x);
        else if(w - x > y) printf("%d", (y > x) ? x : y);
        else printf("%d", w - x); }

}


