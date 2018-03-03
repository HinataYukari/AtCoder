#include <iostream>
#include <cmath>
#include <cstdlib>
#include <algorithm>

#define Rep(b, e, i) for(int i = b; i <= e; i++)
#define rep(n, i) Rep(0, n-1, i)
#define INF 10000000

using namespace std;

void solve(void){
    int h, w;
    cin >> h >> w;
    int magic[10][10];
    rep(10, i) {
        rep(10, j) scanf("%d ", &magic[i][j]);
        scanf("\n");
    }

    //wf
    rep(10, k) rep(10, i) rep(10, j) magic[i][j] = min(magic[i][j], magic[i][k] + magic[k][j]);

    int ans = 0;
    rep(h, i) {
        rep(w, j) {
            int num;
            scanf("%d ", &num);
            if (num < 0) continue;
            ans += magic[num][1];
        }
        scanf("\n");
    }
    printf("%d\n", ans);
}

int main(void){
  solve();
  return 0;
}
