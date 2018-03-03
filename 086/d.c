#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define rep(n, i) for(int i = 0; i < n; i++)
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

void solve(void){
    int n, k;
    scanf("%d%d\n",&n, &k);
    long long xs[n], ys[n];
    char cs[n];
    rep (n, i) scanf("%lld %lld %s\n", &xs[i], &ys[i], &cs[i]);

    int ans = 0;
    rep (k+1, x){
        rep(k+1, y){
            int temp_ans = 0;
            rep(n, i){
                char temp_c;
                if (((xs[i] + x) / k + (ys[i] + y) / k) % 2 == 0) temp_c = 'B';
                else temp_c = 'W';
                if (temp_c == cs[i]) temp_ans++;
            }
            ans = MAX(ans, MAX(temp_ans, n-temp_ans));
            if (ans == n) {
                printf("%d\n", ans);
                return;
            }
        }
    }
  printf("%d\n", ans);
}

int main(void){
  solve();
  return 0;
}
