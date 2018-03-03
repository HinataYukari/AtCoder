#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define rep(n, i) for(int i = 0; i < n; i++)
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

void solve(void){
    int n;
    scanf("%d\n", &n);
    int cs[n-1], ss[n-1], fs[n-1];
    rep(n-1, i) scanf("%d%d%d\n", &cs[i], &ss[i], &fs[i]);

    rep(n-1, j) {
        int t = ss[j] + cs[j];
        for (int k = j+1; k < n-1; k++){
            if (t <= ss[k]) t = ss[k] + cs[k];
            else if (t % fs[k]) t += fs[k] - (t % fs[k]) + cs[k];
            else t += cs[k];
        }
        printf("%d\n", t);
    }
    printf("%d\n", 0);
}

int main(void){
  solve();
  return 0;
}
