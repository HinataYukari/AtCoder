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

typedef std::priority_queue<int> IntPrioQueue;
typedef std::priority_queue<int, std::vector<int>, std::greater<int> > IntReversePrioQueue;

int dx4[4]={1,0,-1,0};
int dy4[4]={0,1,0,-1};
int dx8[8]={1,0,-1,1,-1,1,0,-1};
int dy8[8]={1,1,1,0,0,-1,-1,-1};

void solve(void){
    int n;
    cin >> n;
    ll as[3*n];
    rep (3*n, i) cin >> as[i];

    IntReversePrioQueue heads;
    IntPrioQueue lasts;
    ll headsum = 0, lastsum = 0;
    rep (n, i){
        heads.push(as[i]);
        lasts.push(as[2*n+i]);
        headsum += as[i];
        lastsum += as[i+2*n];
    }

    ll headsums[n+1], lastsums[n+1];
    headsums[0] = headsum; lastsums[n] = lastsum;

    rep(n, i){
        heads.push(as[i+n]);
        headsum += as[i+n] - heads.top();
        heads.pop();
        headsums[i+1] = headsum;
    }
    for(int i = 2*n-1; i >= n; i--){
        lasts.push(as[i]);
        lastsum += as[i] - lasts.top();
        lasts.pop();
        lastsums[i-n] = lastsum;
    }
    ll ans = headsums[0] - lastsums[0];
    rep(n, i) ans = max(ans, headsums[i+1] - lastsums[i+1]);
    cout << ans << endl;
}

int main(void){
  solve();
  return 0;
}
