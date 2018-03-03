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
#define MAX 200000
#define MOD (int) 1000000007

typedef long long ll;
typedef pair<ll, ll> P;
typedef std::priority_queue<int> IntPrioQueue; //Z->A
typedef std::priority_queue<int, std::vector<int>, std::greater<int> > IntReversePrioQueue; //A->Z

//階乗とその逆元
ll fac[MAX+1],facInv[MAX+1];

ll power(ll e, ll x){ //e^x % MOD
    if (x == 0) return 1LL;
    if (x % 2 != 0) return ((power(e, x-1) * e) % MOD);
    ll temp = power(e, x / 2);
    return (temp * temp) % MOD;
}

ll nck(ll n, ll k){
    if (!(n >= k && k >= 0)) return 0;
    ll temp = (fac[n] * facInv[n-k]) % MOD;
    return ((temp * facInv[k]) % MOD);
}

void fact(void){
    //階乗とその逆元
    fac[0] = facInv[0] = 1; //0! = 1
    //(x!)^(-1) ≡ (x!)^(p-2) (mod p)
    Rep(1, MAX, i) fac[i] = (fac[i-1] * i) % MOD;
    facInv[MAX] = power(fac[MAX], MOD-2);
    Rep(1, MAX-1, i) facInv[MAX-i] = (facInv[MAX-i+1] * (MAX-i+1)) % MOD;
}

void solve(void){
    int w, h, a, b;
    cin >> h >> w >> a >> b;
    //combination
    fact();
    ll ans = 0;
    Rep(0, h-a-1, i) {
        ans += nck(i+b-1, i) * nck(h+w-b-i-2, h-i-1);
        ans %= MOD;
    }
    cout << ans << '\n';
}

int main(void){
  solve();
  return 0;
}
