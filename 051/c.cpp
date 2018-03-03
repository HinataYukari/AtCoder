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

void solve(void){
    int a, b, c, d;
    scanf("%d%d%d%d\n", &a, &b, &c, &d);
    int dx = c-a, dy = d-b;
    rep(dy, i) putchar('U');
    rep(dx+1, i) putchar('R');
    rep(dy+1, i) putchar('D');
    rep(dx+1, i) putchar('L');
    rep(1, i) putchar('U');
    rep(1, i) putchar('L');
    rep(dy+1, i) putchar('U');
    rep(dx+1, i) putchar('R');
    rep(dy+1, i) putchar('D');
    rep(dx, i) putchar('L');
    printf("\n");
}

int main(void){
  solve();
  return 0;
}
