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
typedef long long ll;
#define Rep(b, e, i) for(int i = b; i <= e; i++)
#define rep(n, i) Rep(0, n-1, i)

//abc038c
void solve(void){
    //input
    int n;
    scanf("%d\n", &n);
    int as[n];
    rep(n, i) scanf("%d ", &as[i]);
    //calc
    int temp = 1;
    ll ans = 1;
    Rep(1, n-1, i) {
        if (as[i] > as[i-1]) temp++;
        else temp = 1;
        ans+=temp;
    }
    printf("%lld\n", ans);
}

int main(void){
  solve();
  return 0;
}
