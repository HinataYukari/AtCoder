#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define rep(n, i) for(int i = 0; i < n; i++)
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define INF 10000000

void  swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void solve(void){
    int n;
    scanf("%d\n", &n);
    int ls[n];
    rep (n, i) scanf("%d ", &ls[i]);
    int ans = 0;
    rep (n, i) if (ls[i] == i+1) {
        if (i != n-1) swap(&ls[i], &ls[i+1]);
        else swap(&ls[i], &ls[i-1]);
        ans++;
    }

  printf("%d\n", ans);
}

int main(void){
  solve();
  return 0;
}
