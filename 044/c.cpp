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
#define MAX 128

typedef long long ll;
//dp[i][j][k]:=i枚目までのj枚で和がk
ll dp[MAX][MAX][MAX*MAX];

void solve(void){
    ll n, a, sum = 0LL;
    cin >> n >> a;
    ll xs[n];
    rep(n, i) scanf("%lld", &xs[i]);
    sort(xs, xs+n);

    dp[0][0][0] = 1LL;
    Rep(0, n-1, i){
        sum += xs[i];
        Rep(0, i, j) {
            Rep(0, sum, k){
                if(dp[i][j][k]) {
                    dp[i+1][j][k] += dp[i][j][k];
                    dp[i+1][j+1][k+xs[i]] += dp[i][j][k];
                }
            }
        }
    }
    ll ans = 0LL;
    for(int i = 1; i*a <= sum; i++){
        ans += dp[n][i][i*a];
    }
    cout << ans << '\n';
}

int main(void){
  solve();
  return 0;
}
