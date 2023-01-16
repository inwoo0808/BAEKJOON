//
//  main.c
//  problem29
//
//  Created by 오인우 on 2022/01/10.
//

#include<stdio.h>
int main(){
    int input;
    int count = 0;
    
    scanf("%d", &input);
    
    while(input > 0){
        if(input % 5 == 0){
            input -= 5;
            count++;
        }
        else if(input % 3 ==0){
            input -= 3;
            count++;
        }
        else if(input > 5){
            input -= 5;
            count++;
        }
        else{
            count = -1;
            break;
        }
        
    }
    printf("%d", count);
}
