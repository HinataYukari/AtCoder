#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <functional>
using namespace std;

#define Rep(b, e, i) for(int i = b; i <= e; i++)
#define rep(n, i) Rep(0, n-1, i)
#define INF 10000000

typedef long long ll;
typedef pair<ll, ll> P;

void solve(void){
    ll n, m;
    scanf("%lld %lld\n", &n, &m);
    bool start[n], goal[n];
    fill(start, start+n, false);
    fill(goal, goal+n, false);
    rep(m, i) {
        ll a, b;
        scanf("%lld%lld\n", &a, &b);
        if (a == 1) start[b-1] = true;
        if (b == n) goal[a-1] = true;
    }

    bool flag = false;
    rep(n, i){
        if (start[i-1] and goal[i-1]) {
            flag = true; break;
        }
    }
    string s = flag ? "POSSIBLE" : "IMPOSSIBLE";
    cout << s << '\n';

}

int main(void){
  solve();
  return 0;
}
