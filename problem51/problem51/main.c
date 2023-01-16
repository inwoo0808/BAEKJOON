//
//  main.c
//  problem51
//
//  Created by 오인우 on 2022/02/03.
//

#include <stdio.h>
#include <math.h>

int main(void)
{
    int N, idx = 0;
    int num = 665;
    
    scanf("%d", &N);
    
    while(1){
        if(idx == N)
            break;
        
        num++;
        
        for(int i = 0; i < 10; i++){
            if(num / (int)pow(10, i) % 1000 == 666){
                idx++;
                break;
            }
        }
    }
    
    printf("%d\n", num);
    
}
