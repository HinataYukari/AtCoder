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

typedef long long ll;

//dp[digit][n<=][4or9]
ll dp[20][2][2];

ll digitdp(ll n){
    //initialize
    memset(dp, 0, sizeof(dp));
    dp[0][0][0] = 1;
    string s = to_string(n);
    int len = s.length();
    rep(len, i) {
        int d = s[i] - '0';
        rep(2, j){
            rep(2, k) {
                Rep(0, (j ? 9 : d), l){
                    dp[i+1][j || l < d][k || l == 4 || l == 9] += dp[i][j][k];
                }
            }
        }
    }
    return dp[len][0][1] + dp[len][1][1];
}

void solve(void){
    ll l, r;
    scanf("%lld%lld\n", &l, &r);
    printf("%lld\n", digitdp(r) - digitdp(l-1));
}

int main(void){
  solve();
  return 0;
}
