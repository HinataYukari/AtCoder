#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define rep(n, i) for(int i = 0; i < n; i++)
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define INF 100001


void solve(void){
    int counts[INF];
    int p_flag[INF];

    rep (INF, i) counts[i] = p_flag[i] = 0;
    for (int i = 2; i <= INF; i++) {
        if (!p_flag[i-1]) {
            for (int j = 2*i; j <= INF; j += i) p_flag[j-1] = 1;
        }
    }
    for (int i = 3; i <= INF; i+=2) {
        if (!p_flag[i-1]&&!p_flag[(i+1)/2-1]) counts[i-1]++;
    }
    for(int i = 3; i <= INF; i++) counts[i-1] += counts[i-2];
    int n;
    scanf("%d\n", &n);
    while (n--) {
        int l, r;
        scanf("%d%d\n", &l, &r);
        printf("%d\n", counts[r-1]-counts[MAX(0,l-2)]);
    }
}

int main(void){
  solve();
  return 0;
}
