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
typedef std::priority_queue<P, std::vector<P>, std::greater<P> > PReversePrioQueue; //A->Z

void solve(void){
    int n; ll k;
    scanf("%d%lld\n", &n, &k);
    ll c = 0;
    PReversePrioQueue pq;

    rep (n, i) {
        P ptemp;
        scanf("%lld%lld\n", &(ptemp.first), &(ptemp.second));
        pq.push(ptemp);
    }
    ll ans;
    while(c < k){
        P ptemp = pq.top();
        ll a = ptemp.first, b = ptemp.second;
        pq.pop();
        c += b;
        ans = a;
    }
    cout << ans << '\n';
}

int main(void){
  solve();
  return 0;
}
