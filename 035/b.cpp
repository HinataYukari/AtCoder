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
#define MAX 200000

const double PI = 3.14159265358979323846;
const double EPS = 1e-12;
const int INF = 1<<31;
const int MOD = 1000000007;

int l, r, u, d, q;

typedef long long ll;
typedef pair<ll, ll> llP;
typedef pair<int, int> intP;
typedef std::priority_queue<int> IntPrioQueue; //Z->A
typedef std::priority_queue<int, std::vector<int>, std::greater<int> > IntReversePrioQueue; //A->Z

void solve(void){
    string s; cin >> s;
    int t; cin >> t;
    rep(s.length(), i) {
        switch (s[i]) {
            case 'L': l++; break;
            case 'R': r++; break;
            case 'U': u++; break;
            case 'D': d++; break;
            case '?': q++; break;
        }
    }
    int manhattanDis = abs(l-r) + abs(u-d);
    if (t == 1) cout << manhattanDis + q << endl;
    else cout << ((manhattanDis - q) >= 0 ? (manhattanDis - q) : ((q-manhattanDis)%2)) << endl;
}

int main(void){
  solve();
  return 0;
}
