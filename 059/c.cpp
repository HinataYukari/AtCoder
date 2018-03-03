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


int dx4[4]={1,0,-1,0};
int dy4[4]={0,1,0,-1};
int dx8[8]={1,0,-1,1,-1,1,0,-1};
int dy8[8]={1,1,1,0,0,-1,-1,-1};

void solve(void){
    int n;
    cin >> n;
    ll accsum = 0; //累積和
    ll as[n];
    rep(n, i) scanf("%lld ", &as[i]);
    //even(0-indexed) > 0
    ll ans1 = 0;
    rep(n, i) {
        accsum += as[i];
        if (i % 2 == 0) {
            ll diff = max(0LL, 1LL - accsum);
            ans1 += diff;
            accsum += diff;
        }
        else {
            ll diff = max(0LL, 1LL + accsum);
            ans1 += diff;
            accsum -= diff;
        }
    }
    //even(0-indexed) < 0
    accsum = 0;
    ll ans2 = 0;
    rep(n, i) {
        accsum += as[i];
        if (i % 2 != 0) {
            ll diff = max(0LL, 1LL - accsum);
            ans2 += diff;
            accsum += diff;
        }
        else {
            ll diff = max(0LL, 1LL + accsum);
            ans2 += diff;
            accsum -= diff;
        }
    }
    cout << min(ans1, ans2) << '\n';
}

int main(void){
  solve();
  return 0;
}
