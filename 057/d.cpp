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
#define MAX 51
typedef long long ll;
typedef pair<ll, ll> P;
typedef std::priority_queue<int> IntPrioQueue; //Z->A
typedef std::priority_queue<int, std::vector<int>, std::greater<int> > IntReversePrioQueue; //A->Z


int dx4[4]={1,0,-1,0};
int dy4[4]={0,1,0,-1};
int dx8[8]={1,0,-1,1,-1,1,0,-1};
int dy8[8]={1,1,1,0,0,-1,-1,-1};

void solve(void){
    ll n, a, b;
    cin >> n >> a >> b;
    ll values[n];
    rep(n, i) scanf("%lld", &values[i]);

    sort(values, values+n);
    reverse(values, values+n);
    ll kosuu = 0;
    double sum = 0;
    while (kosuu < a){
        sum += values[kosuu];
        kosuu++;
    }
    printf("%lf\n", sum / kosuu);

    ll rest = 1, all;
    for(int i = kosuu-2; i >= 0; i--){
        if (values[i] != values[i+1]) break;
        rest++;
    }
    all = rest;
    Rep(0, n-kosuu-1, i) {
        if (values[kosuu+i-1] != values[kosuu+i]) break;
        all++;
    }

    /*cout << all << ' ' << rest << '\n';*/

    long c[MAX][MAX]; //combination
    rep(MAX, j) c[j][0] = 1;
    rep(MAX, j) c[j][1] = j;
    rep(MAX-1, j) rep(MAX-1, i) c[j+1][i+1] = c[j][i+1] + c[j][i];
    if (values[kosuu-1] == values[0]) {
        long ans = 0;
        Rep(rest, all, i) ans += c[all][i];
        printf("%ld\n", ans);
    }
    else {
        printf("%ld\n", c[all][rest]);
    }
}

int main(void){
  solve();
  return 0;
}
