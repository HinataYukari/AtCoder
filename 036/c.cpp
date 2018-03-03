#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <numeric>
#include <functional>
using namespace std;

#define Rep(b, e, i) for(int i = b; i <= e; i++)
#define rep(n, i) Rep(0, n-1, i)
#define MAX 200000
#define MOD 1000000007
const double PI = 3.14159265358979323846;
const double EPS = 1e-12;
const int INF = 1<<31;
typedef pair<int, int> intP;
//abc036c
void solve(void){
    //input
    int n; scanf("%d\n", &n);
    int as[n], bs[n];
    rep(n, i) {
        scanf("%d\n", &as[i]);
        bs[i] = as[i];
    }
    sort(bs, bs+n);
    map<int, int> m;
    int c = 0;
    m.emplace(bs[0], c);
    Rep(1, n-1, i){
        if (bs[i] != bs[i-1]) {
            c++; m.emplace(bs[i], c);
        }
    }
    rep(n, i){
        printf("%d\n", m.at(as[i]));
    }
}

int main(void){
  solve();
  return 0;
}
