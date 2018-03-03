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
typedef std::priority_queue<int> IntPrioQueue; //Z->A
typedef std::priority_queue<int, std::vector<int>, std::greater<int> > IntReversePrioQueue; //A->Z


int dx4[4]={1,0,-1,0};
int dy4[4]={0,1,0,-1};
int dx8[8]={1,0,-1,1,-1,1,0,-1};
int dy8[8]={1,1,1,0,0,-1,-1,-1};

void solve(void){
    int n, m;
    scanf("%d%d\n", &n, &m);
    char astring[n][n];
    rep(n, i) scanf("%s\n", astring[i]);
    char bstring[m][m];
    rep(m, i) scanf("%s\n", bstring[i]);
    bool flag = false;

    Rep(0, n-m, k) {
        Rep(0, n-m, l) {
            if (flag) break;
            flag = true;
            rep(m, i) {
                rep(m, j) {
                    if (astring[i+k][j+l] != bstring[i][j]) flag = false;
                }
            }
        }
    }
    printf("%s\n", flag ? "Yes" : "No");
}

int main(void){
  solve();
  return 0;
}
