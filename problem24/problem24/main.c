//
//  main.c
//  problem24
//
//  Created by 오인우 on 2022/01/05.
//

#include <stdio.h>
 
int main(){
    int N,x=1, cnt=1;
    
    scanf("%d",&N);
    
    while(1){
        if(N - x <= 0) break;
        
        N -= x;
        x = cnt * 6;
        cnt++;
    }
    
    printf("%d\n",cnt);
    
    return 0;
}

