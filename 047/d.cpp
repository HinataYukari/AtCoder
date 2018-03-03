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
    int n, t;
    scanf("%d%d\n", &n, &t);
    int as[n];
    rep(n, i) scanf("%d ", &as[i]);
    int maxdiff = 0, ans = 0, mina = as[0];
    Rep(0, n-1, i) {
        mina = min(as[i], mina);
        if (as[i]-mina > maxdiff) {
            maxdiff = as[i]-mina;
            ans = 1;
        }
        else if (as[i]-mina == maxdiff) ans++;
    }
    printf("%d\n", ans);
}

int main(void){
  solve();
  return 0;
}
