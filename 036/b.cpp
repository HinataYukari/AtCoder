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
#define MAX 64

char map[MAX][MAX];

void solve(void){
    int n; scanf("%d\n", &n);
    rep(n, i) scanf("%s\n", &map[i]);
    rep(n, w) {
        rep(n, h) putchar(map[n-1-h][w]);
        putchar('\n');
    }
}

int main(void){
  solve();
  return 0;
}
