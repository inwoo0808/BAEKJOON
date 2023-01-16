//
//  main.c
//  problem56
//
//  Created by 오인우 on 2022/02/08.
//

#include <stdio.h>
#include <string.h>

int main()
{
    char N[11] = { NULL };
    
    int tmp;
    
    gets(N);
    
    for(int i = 0; i < strlen(N) - 1; i++){
        for(int j = i; j < strlen(N); j++){
            if(N[i] < N[j]){
                tmp = N[i];
                N[i] = N[j];
                N[j] = tmp;
            }
        }
    }
    
    puts(N);
}
