//
//  main.c
//  problem104
//
//  Created by 오인우 on 2023/02/18.
//

#include <stdio.h>

int min2(int num1, int num2);
int min3(int num1, int num2, int num3);
int max2(int num1, int num2);
int max3(int num1, int num2, int num3);

int main(){
    int num;
    scanf("%d\n", &num);
    
    int array[3];
    int max[3] = {0, 0, 0};
    int curMax[3];
    int min[3] = {0, 0, 0};
    int curMin[3];
    
    for(int i = 0; i < num; i++){
        scanf("\n%d %d %d\n", &array[0], &array[1], &array[2]);
        
        curMax[0] = max2(max[0] + array[0], max[1] + array[0]);
        
        curMax[2] = max2(max[1] + array[2], max[2] + array[2]);
        
        curMax[1] = max3(max[0] + array[1], max[1] + array[1], max[2] + array[1]);
        
        for(int j = 0; j < 3; j++){
            max[j] = curMax[j];
        }
        
        curMin[0] = min2(min[0] + array[0], min[1] + array[0]);
        
        curMin[2] = min2(min[1] + array[2], min[2] + array[2]);
        
        curMin[1] = min3(min[0] + array[1], min[1] + array[1], min[2] + array[1]);
        
        for(int j = 0; j < 3; j++){
            min[j] = curMin[j];
        }
    }
    
    int resultMax = max3(max[0], max[1], max[2]);
    int resultMin = min3(min[0], min[1], min[2]);
    
    printf("%d %d\n", resultMax, resultMin);
    
    return 0;
}

int min2(int num1, int num2){
    return num1 < num2 ? num1 : num2;
}

int min3(int num1, int num2, int num3){
    if(num1 <= num2 && num1 <= num3){
        return num1;
    }
    else if(num2 <= num1 && num2 <= num3){
        return num2;
    }
    return num3;
}

int max2(int num1, int num2){
    return num1 > num2 ? num1 : num2;
}

int max3(int num1, int num2, int num3){
    if(num1 >= num2 && num1 >= num3){
        return num1;
    }
    else if(num2 >= num1 && num2 >= num3){
        return num2;
    }
    return num3;
}
