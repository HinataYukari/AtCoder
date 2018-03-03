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
#define MAX 200000
#define INF (ll)1e10
#define MOD 1000000007

typedef long long ll;
typedef pair<ll, ll> P;
typedef std::priority_queue<int> IntPrioQueue; //Z->A
typedef std::priority_queue<int, std::vector<int>, std::greater<int> > IntReversePrioQueue; //A->Z


int dx4[4]={1,0,-1,0};
int dy4[4]={0,1,0,-1};

ll R, C;
ll sx, sy;
ll gx, gy;
char map[51][51];
ll steps[51][51];

ll bfs(){
    queue<P> que;

    rep(R, y) rep(C, x) steps[y][x] = INF;
    que.push(P(sx, sy));
    steps[sy][sx] = 1;
    while(que.size()){
        P p = que.front(); que.pop();
        if (p.first == gx && p.second == gy) break;
        rep (4, i) {
            ll nx = p.first + dx4[i];
            ll ny = p.second + dy4[i];
            if (nx >= 0 && nx < C && ny >= 0 && ny < R){
                if (map[ny][nx] == '.' && steps[ny][nx] == INF) {
                    que.push(P(nx, ny));
                    steps[ny][nx] = steps[p.second][p.first] + 1;
                }
            }
        }
    }
    return steps[gy][gx];
}


void solve(void){
    cin >> R >> C;
    rep (R, y) scanf("%s\n", &map[y]);
    sx = sy = 0;
    gx = C-1, gy = R-1;
    ll step = bfs();
    if (step == INF) printf("-1\n");
    else {
        ll ans = 0;
        rep(R, i) rep(C, j) {
            if (map[i][j] == '.') ans++;
        }
        printf("%lld\n", ans-step);
    }
}

int main(void){
  solve();
  return 0;
}
