#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <functional>
using namespace std;

#define Rep(b, e, i) for(int i = b; i <= e; i++)
#define rep(n, i) Rep(0, n-1, i)

const double PI = 3.14159265358979323846;
const double EPS = 1e-12;
const int INF = (1<<31)-1;
const int MOD = 1000000007;
const int MAX = 200000;

typedef long long ll;

//I was really helped by the blog below
//http://codeforces.com/blog/entry/20935

//adjacency list
//adj[i] contains all neighbors of i
vector<int> adj[MAX];

//dp[i][j] := patterns when parent node is "i" (j = 0/1 => white/block)
ll dp[MAX][2];

//treeDP(child, paraent)
//dfs
void treeDP(int V, int pV){
    ll patternW = 1LL, patternB = 1LL;
    for(auto v: adj[V]) {
        if(v == pV) continue;
        treeDP(v, V);
        patternW *= dp[v][0] + dp[v][1];
        patternB *= dp[v][0];
        patternW %= MOD;
        patternB %= MOD;
    }
    dp[V][0] = patternW % MOD;
    dp[V][1] = patternB % MOD;
}

void solve(void){
    //input
    int n; scanf("%d\n", &n);
    rep(n-1, i){
        int a, b;
        scanf("%d%d\n", &a, &b);
        a--; b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    //init
    treeDP(0, -1);
    printf("%lld\n", (dp[0][0]+dp[0][1])%MOD);
}

int main(void){
  solve();
  return 0;
}
