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
typedef long long ll;
#define Rep(b, e, i) for(int i = b; i <= e; i++)
#define rep(n, i) Rep(0, n-1, i)
#define INF (ll)1<<32
#define MAX (int)1e7
ll dp[MAX];

void solve(void){
    int n; scanf("%d\n", &n);
    ll trees[n]; rep(n, i) scanf("%lld ", &trees[i]);
    fill(dp, dp+n, INF);
    dp[0] = 0;
    rep(n, i) {
        Rep(1, 2, j){
            ll dist = abs(trees[i]-trees[i+j]);
            dp[i+j] = min(dp[i+j], dp[i]+dist);
        }
    }
    cout << dp[n-1] << '\n';
}

int main(void){
  solve();
  return 0;
}
