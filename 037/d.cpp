#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <functional>
using namespace std;

#define Rep(b, e, i) for(int i = b; i <= e; i++)
#define rep(n, i) Rep(0, n-1, i)
#define MAX 1024
#define MOD 1000000007

typedef long long ll;

int map[MAX][MAX];
ll dp[MAX][MAX];
int h, w;
int dx4[4]={1,0,-1,0};
int dy4[4]={0,1,0,-1};

ll bfs(int x, int y){
    if (dp[y][x] != -1) return dp[y][x];
    dp[y][x] = 1;
    rep(4, k){
        int nx = x+dx4[k], ny = y+dy4[k];
        if (0 <= nx and nx <= w-1 and 0 <= ny and ny <= h-1) {
            if (map[y][x] < map[ny][nx]) {
                dp[y][x] += bfs(nx, ny);
                dp[y][x] %= MOD;
            }
        }
    }
    return dp[y][x];
}
//abc037d
void solve(void){
    //input
    scanf("%d%d\n", &h, &w);
    rep(h, i) {
        rep(w, j) scanf("%d ", &map[i][j]);
        scanf("\n");
    }

    ll ans = 0;
    memset(dp, -1, sizeof(dp));
    rep(h, i) {
        rep(w, j) {
            dp[i][j] = bfs(j, i);
            ans += dp[i][j];
            ans %= MOD;
        }
    }
    printf("%lld\n", ans);
}

int main(void){
  solve();
  return 0;
}
