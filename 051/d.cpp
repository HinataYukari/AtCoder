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
#define MAX 101
#define INF (int)1e5

int path[MAX][MAX];

void solve(void){
    int n, m;
    cin >> n >> m;
    rep(n, i) rep(n, j) if(i != j) path[i][j] = INF; else path[i][j] = 0;
    int as[m], bs[m], cs[m];
    rep(m, i) {
        scanf("%d%d%d\n", &as[i], &bs[i], &cs[i]);
        as[i]--; bs[i]--;
        path[as[i]][bs[i]] = min(path[as[i]][bs[i]], cs[i]);
        path[bs[i]][as[i]] = min(path[bs[i]][as[i]], cs[i]);
    }
    //WF
    rep(n, k) rep(n, i) rep(n, j) path[i][j] = min(path[i][j], path[i][k]+path[k][j]);
    int ans = m;
    rep(m, k){
        bool flag = false;
        /*
        rep(n, i) if (path[i][as[k]] == path[i][bs[k]] + cs[k]) {
            flag = true; break;
        }
        */
        rep(n, i) rep(n, j) if (path[i][j] == path[i][as[k]] + path[bs[k]][j] + cs[k]) {
            flag = true; break;
        }
        if (flag) ans--;
    }
    cout << ans << '\n';
}

int main(void){
  solve();
  return 0;
}
