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
#define INF (long)1e+9

typedef long long ll;
typedef pair<ll, ll> P;
typedef std::priority_queue<int> IntPrioQueue; //Z->A
typedef std::priority_queue<int, std::vector<int>, std::greater<int> > IntReversePrioQueue; //A->Z

void solve(void){
    int n;
    cin >> n;
    int isopen[n][10];
    ll benefit[n][11];
    rep(n, i) rep(10, k) scanf("%d", &isopen[i][k]);
    rep(n, i) rep(11, k) scanf("%lld", &benefit[i][k]);
    int digit = 0; bool flag[11];
    fill(flag, flag+11, false);
    ll score = -INF;
    rep(pow(2, 10)-1, i){
        while (flag[digit]) {
            flag[digit] = false;
            digit++;
        }
        flag[digit] = true; digit = 0;
        ll temp_score = 0;
        rep(n, j) {
            int count = 0;
            rep(10, k) if(isopen[j][k] and flag[k]) count++;
            temp_score += benefit[j][count];
        }
        score = max(score, temp_score);
    }
    cout << score << endl;
}

int main(void){
  solve();
  return 0;
}
