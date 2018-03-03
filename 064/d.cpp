#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
using namespace std;

#define Rep(b, e, i) for(int i = b; i <= e; i++)
#define rep(n, i) Rep(0, n-1, i)
#define INF 10000000

typedef long long ll;
typedef pair<ll, ll> P;


void solve(void){
    int n;
    cin >> n;
    char s[n];
    scanf("%s\n", s);
    int rs = 0, ls = 0;
    int templ = 0, tempr = 0;
    rep(n, i){
        if (s[i] == '(') templ++;
        else if (s[i] == ')') tempr++;
        if (i != n){
            if (s[i] == ')' && s[i+1] == '(') {
                if (templ > tempr) rs += templ - tempr;
                else if (templ < tempr) ls += tempr - templ;
                templ = tempr = 0;
            }
        }
    }
    if (templ > tempr) rs += templ - tempr;
    else if (templ < tempr) ls += tempr - templ;

    rep(ls, i) cout << '(' << flush;

    cout << s << flush;

    rep(rs, i) cout << ')' << flush;

    std::cout << '\n';
}

int main(void){
  solve();
  return 0;
}
