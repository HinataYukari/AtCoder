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
    int w, h, n;
    cin >> w >> h >> n;
    int xl = 0, xr = w, yd = 0, yu = h;
    rep(n, i) {
        int x, y, a;
        scanf("%d%d%d\n", &x, &y, &a);
        switch (a) {
            case 2: xr = min(xr, x); break;
            case 1: xl = max(xl, x); break;
            case 4: yu = min(yu, y); break;
            case 3: yd = max(yd, y); break;
        }
    }
    int ans;
    if (xr <= xl or yu <= yd) ans = 0;
    else ans = (xr - xl) * (yu - yd);
    cout << ans << '\n';
}

int main(void){
  solve();
  return 0;
}
