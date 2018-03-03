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
//abc037c
void solve(void){
    int N, K;
    cin >> N >> K;
    ll ans = 0, tempsum = 0;
    vector<ll> nums(N);
    rep(N, i) scanf("%lld\n", &nums[i]);
    rep(K, i) tempsum += nums[i];
    ans += tempsum;
    rep(N-K, i) {
        tempsum += nums[i+K] - nums[i];
        ans += tempsum;
    }
    cout << ans << '\n';
}

int main(void){
  solve();
  return 0;
}
