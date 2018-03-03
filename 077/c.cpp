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
typedef std::priority_queue<int> IntPrioQueue; //Z->A
typedef std::priority_queue<int, std::vector<int>, std::greater<int> > IntReversePrioQueue; //A->Z

void solve(void){
    int n;
    scanf("%d\n", &n);
    ll as[n], bs[n], cs[n];
    rep(n, i) scanf("%lld", &as[i]);
    rep(n, i) scanf("%lld", &bs[i]);
    rep(n, i) scanf("%lld", &cs[i]);
    sort(as, as+n);sort(bs, bs+n);sort(cs, cs+n);

    ll saidanUp[n];
    ll upsum = 0, downsum = 0;
    rep(n, i) {
        if (bs[i] > as[0]) upsum += upper_bound(as, as+n, bs[i]-1) - as;
        saidanUp[i] = upsum;
    }
    rep(n, i) {
        if (cs[i] <= bs[0]) continue;
        downsum += saidanUp[upper_bound(bs, bs+n, cs[i]-1) - bs - 1];
    }

    cout << downsum << '\n';
}

int main(void){
  solve();
  return 0;
}
