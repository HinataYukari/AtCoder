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
    string s;
    cin >> s;
    int n = s.length();
    int b = -1, e = -1;
    Rep(0, n-2, i) {
        if (b != -1) break;
        if (s[i] == s[i+1]) {
            b = i+1; e = i+2;
        }
        else if (i != n-2 and s[i] == s[i+2]) {
            b = i+1; e = i+3;
        }
    }
    cout << b << ' ' << e << '\n';
}

int main(void){
  solve();
  return 0;
}
