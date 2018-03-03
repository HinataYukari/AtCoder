#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define rep(n, i) for(int i = 0; i < n; i++)
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

void solve(void){
    int n;
    unsigned long y;
    int bool_f = 0;
    long ans[3] = {-1, -1, -1};
    scanf("%d %ld\n", &n, &y);
    if (10000 * n >= y) {
        for (int i = n; i >= 0; i--) {
            if (i * 10000 > y) continue;
            if (bool_f) break;
            for (int j = n-i; j >= 0; j--) {
                if (i * 10000 + j * 5000 > y) continue;
                if (i * 10000 + j * 5000 + (n-i-j) * 1000 == y) {
                    ans[0] = i; ans[1] = j; ans[2] = n-i-j;
                    bool_f = 1;
                    break;
                }
            }
        }
    }

  printf("%ld %ld %ld\n", ans[0], ans[1], ans[2]);
}

int main(void){
  solve();
  return 0;
}
