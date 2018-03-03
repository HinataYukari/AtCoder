#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define rep(n, i) for(int i = 0; i < n; i++)
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define INF 100001

void solve(void){
    int n, m, r;
    scanf("%d%d%d\n", &n, &m, &r);
    int rs[r];
    rep(r, i) scanf("%d", &rs[i]);
    int ds[n][n];
    rep(n, i) rep(n, j) ds[i][j] = INF;

    rep(m, i) {
        int a, b, c;
        scanf("%d%d%d\n", &a, &b, &c);
        if (ds[a][b] > c) ds[a][b] = ds[b][a] = c;
    }
    rep(n, k){
        rep(n, i){
            rep(n, j){
                if (ds[i][j] > ds[i][k] + ds[k][j]) ds[i][j] = ds[i][k] + ds[k][j];
            }
        }
    }
    

  printf("%d\n", ans);
}

int main(void){
  solve();
  return 0;
}
