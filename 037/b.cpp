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
    int n, q; scanf("%d%d\n", &n, &q);
    vector<int> v(n);
    rep(q, i){
        int L, R, T;
        scanf("%d%d%d\n", &L, &R, &T);
        fill(v.begin()+L-1, v.begin()+R, T);
    }
    rep(n, i) printf("%d\n", v[i]);
}

int main(void){
  solve();
  return 0;
}
