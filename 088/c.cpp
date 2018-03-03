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
int dx8[8]={1,0,-1,1,-1,1,0,-1};
int dy8[8]={1,1,1,0,0,-1,-1,-1};

void solve(void){
    int ss[3][3];
    rep(3, i) rep(3, j) {
        scanf("%d", &ss[i][j]);
    }
    bool flag = true;
    rep(2, j) {
        rep(2, i){
            if (ss[i+1][j] - ss[i][j] != ss[i+1][j+1] - ss[i][j+1]) flag = false;
        }
    }
    /*
    rep(2, i) {
        rep(2, j){
            if (ss[i][j] - ss[i][j+1] != ss[i+1][j] - ss[i+1][j+1]) flag = false;
        }
    }
    */
    if (flag) printf("Yes\n");
    else printf("No\n");
}

int main(void){
  solve();
  return 0;
}
