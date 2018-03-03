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

#define Rep(b, e, i) for(ll i = b; i <= e; i++)
#define rep(n, i) Rep(0, n-1, i)
#define MAX 1000
#define MOD (long)1e9+7

typedef long long ll;

bool prime[MAX];

void solve(void){
    //prime_table
    rep(MAX, i) prime[i] = true;
    prime[0] = false;
    Rep(2, MAX, i) {
        if (prime[i-1]) {
            for (int k = 2; (i-1) * k <= MAX; k++){
                prime[(i-1)*k] = false;
            }
        }
    }
    int n;
    scanf("%d\n", &n);
    ll kaijyo = 1;
    Rep(1, n, i){
        kaijyo *= i;
    }
    ll ans = 1;
    ll temp = kaijyo;
    Rep(2, n, i){
        ll c = 1;
        while (temp % i == 0) {
            c++;
            temp /= i;
        }
        ans *= c;
        ans %= MOD;
    }
    printf("%lld\n", ans);
}

int main(void){
  solve();
  return 0;
}
