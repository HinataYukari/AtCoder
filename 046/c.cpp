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

void solve(void){
    int n;
    ll pret, prea;
    scanf("%d\n", &n);
    scanf("%lld %lld\n", &pret, &prea);
    rep(n-1, i) {
        ll t, a;
        scanf("%lld %lld\n", &t, &a);
        ll k = ceill(max((double)prea / a, (double)pret / t));
        prea = a*k; pret = t*k;
    }
    printf("%lld\n", pret+prea);
}

int main(void){
  solve();
  return 0;
}
