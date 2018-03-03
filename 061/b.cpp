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

int dx4[4]={1,0,-1,0};
int dy4[4]={0,1,0,-1};
int dx8[8]={1,0,-1,1,-1,1,0,-1};
int dy8[8]={1,1,1,0,0,-1,-1,-1};

void solve(void){
    int n, m;
    cin >> n >> m;
    int avs[2*m];
    for (int i = 0; i < 2*m; i+=2) {
        cin >> avs[i] >> avs[i+1];
        avs[i]--; avs[i+1]--;
    }
    int ans[n];
    fill(ans, ans + n, 0);
    rep(2*m, i) ans[avs[i]]++;
    rep(n, i) cout << ans[i] << '\n';
}

int main(void){
  solve();
  return 0;
}
