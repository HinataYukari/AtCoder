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

void solve(void){
    int k, s;
    cin >> k >> s;
    int ans=0;
    Rep(max(0, s-2*k), min(s, k), x) {
        ans += min(k, s-x) - max(0, s-x-k) + 1;
    }
    cout << ans << '\n';
}

int main(void){
  solve();
  return 0;
}
