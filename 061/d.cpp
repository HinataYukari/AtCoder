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
#define INF (long long)1e9+1

typedef long long ll;
typedef pair<ll, ll> P;

int dx4[4]={1,0,-1,0};
int dy4[4]={0,1,0,-1};
int dx8[8]={1,0,-1,1,-1,1,0,-1};
int dy8[8]={1,1,1,0,0,-1,-1,-1};

void solve(void){
    int n, m;
    cin >> n >> m;
    ll path[n][n];
    rep(n, i){
        fill(path[i], path[i]+n, -INF);
        path[i][i] = 0;
    }
    rep(m, i) {
        int a, b; ll c;
        scanf("%d%d%lld\n", &a, &b, &c);
        path[--a][--b] = c;
    }
    rep (n, k) rep(n, i) rep(n, j) path[i][j] = max(path[i][j], path[i][k] + path[k][j]);
    cout << path[0][n-1] << '\n';
}

int main(void){
  solve();
  return 0;
}
