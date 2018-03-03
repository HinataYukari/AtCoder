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
typedef pair<int, int> intP;
typedef std::priority_queue<intP, std::vector<intP>, std::greater<intP> > IntPReversePrioQueue; //A->Z

int dx9[9]={0,0,0,1,1,1,-1,-1,-1};
int dy9[9]={1,0,-1,1,0,-1,1,0,-1};
ll ans[10];

void solve(void){
    ll h, w, n;
    scanf("%lld%lld%lld\n", &h, &w, &n);
    IntPReversePrioQueue que;
    rep(n, i){
        ll a, b;
        scanf("%lld%lld\n", &a, &b);
        rep(9, j) {
            ll x = a+dx9[j], y = b+dy9[j];
            if (2 <= x and x <= (h-1) and 2 <= y and y <= (w-1)) que.push(intP(x, y));
        }
    }
    int mulc = 1;
    intP temp;
    while (que.size()) {
        temp = que.top(); que.pop();
        if (temp != que.top() or que.empty()) {
            ans[mulc]++;
            mulc = 1;
        }
        else mulc++;
        //printf("%d %d\n", temp.first, temp.second);
    }
    ans[0] = (h-2)*(w-2);
    Rep(1, 9, i) ans[0] -= ans[i];
    rep(10, i) printf("%lld\n", ans[i]);
}

int main(void){
  solve();
  return 0;
}
