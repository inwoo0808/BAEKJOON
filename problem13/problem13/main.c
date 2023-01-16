//
//  main.c
//  problem13
//
//  Created by 오인우 on 2021/12/27.
//

long long sum(int *a, int n) {
    long long ans = 0;
    for(int i=0; i<n; i++) ans += a[i];
    return ans;
}
