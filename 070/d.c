#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define rep(n, i) for(int i = 0; i < n; i++)
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define INF 1000000
void solve(void){
    int n;
    scanf("%d\n", &n);
    long long ds[n][n];
    rep(n, i) rep(n, j) ds[i][j] = INF;
    long as[n],bs[n],cs[n];
    rep(n-1, i) {
        int a,b;
        long  long c;
        scanf("%d%d%lld\n", &a, &b, &c);
        if (ds[a][b] > c) ds[a][b] = c;
    }
    rep (n-1, k){
        
    }
    int q, k;
    scanf("%d%d\n", &q, &k);
    int xs[q], ys[q];
    rep(q, i) scanf("%d%d\n", &xs[i], &ys[i]);




  printf("%d\n", ans);
}

int main(void){
  solve();
  return 0;
}
