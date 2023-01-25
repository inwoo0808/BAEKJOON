//
//  main.c
//  problem88
//
//  Created by 오인우 on 2023/01/25.
//
#include <stdio.h>

int main() {
  int n, k;
  scanf("%d %d", &n, &k);
  int value[k+1];
  int coin[n+1];

  coin[0] = 0;
  for(int i=1 ; i<n+1 ; i++) {
    scanf("%d", &coin[i]);
  }
  for(int i=0 ; i<k+1 ; i++) {
    value[i] = 0;
    if(i==0)  value[i] = 1;
  }

  for(int i=1 ; i<n+1 ; i++) {
    int Coin = coin[i];
    for(int j=0 ; j<k+1 ; j++) {
      if(j==0) {
        value[j] = 1;
      }
      else
      {
        if( j >= Coin ) {
          value[j] += value[j-Coin];
        }
      }
    }
  }
  printf("%d \n", value[k]);
}
