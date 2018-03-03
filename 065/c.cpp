#include <iostream>
#include <cmath>
#include <cstdlib>
#include <algorithm>

#define Rep(b, e, i) for(int i = b; i <= e; i++)
#define rep(n, i) Rep(0, n-1, i)
#define INF 10000000
#define MOD (long)1e9+7

using namespace std;

void solve(void){
    int n, m;
    cin >> n >> m;
    long long ans = 1;
    if (abs(n-m) > 1) ans = 0;
    else if(n == m){
        Rep(1, n, i) {
            ans *= i;
            ans %= MOD;
        }
        ans *= ans * 2;
        ans %= MOD;
    }
    else {
        Rep(1, min(m, n), i) {
            ans *= i;
            ans %= MOD;
        }
        ans *= ans;
        ans %= MOD;
        ans *= max(m, n);
        ans %= MOD;
    }
    printf("%lld\n", ans);
}

int main(void){
  solve();
  return 0;
}
