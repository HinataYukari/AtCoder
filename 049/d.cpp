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
#define MAX 200000
#define INF (ll)1e10
#define MOD 1000000007

typedef long long ll;
typedef pair<ll, ll> P;
typedef std::priority_queue<int> IntPrioQueue; //Z->A
typedef std::priority_queue<int, std::vector<int>, std::greater<int> > IntReversePrioQueue; //A->Z

void solve(void){
    int n,k,l;
    cin >> n >> k >> l;
    bool load[n][n];
    bool train[n][n];
    rep(n, i) rep(n, j) {
        load[i][j] = train[i][j] = false;
    }
    rep(k, i) {
        int p, q;
        scanf("%d%d\n", &p, &q);
        load[p][q] = load[q][p] = true;
    }
    rep(l, i) {
        int p, q;
        scanf("%d%d\n", &p, &q);
        train[p][q] = train[q][p] = true;
    }
    
    cout << x << '\n';
}

int main(void){
  solve();
  return 0;
}
