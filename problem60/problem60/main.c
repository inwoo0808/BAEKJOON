//
//  main.c
//  problem60
//
//  Created by 오인우 on 2022/02/14.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int age;
    char name[101];
} member;

int compare(member* a, member* b) {
    return (a->age > b->age ? 1 : (a->age < b->age ? -1: 0));
}

int main()
{
    int N;
    scanf("%d", &N);
    member* arr = (member*)malloc(N * sizeof(member));
    for (int i = 0; i < N; i++) {
        scanf("%d %s", &arr[i].age, arr[i].name);
    }
    qsort(arr, N, sizeof(member), compare);
    for (int i = 0; i < N; i++) {
        printf("%d %s\n", arr[i].age, arr[i].name);
    }
    
}
