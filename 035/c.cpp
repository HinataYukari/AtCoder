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
#include <bitset>
#include <algorithm>
#include <numeric>
#include <functional>
using namespace std;

#define Rep(b, e, i) for(int i = b; i <= e; i++)
#define rep(n, i) Rep(0, n-1, i)
#define MAX 200001

const double PI = 3.14159265358979323846;
const double EPS = 1e-12;
const int INF = 1<<31;
const int MOD = 1000000007;

int field[MAX];

typedef long long ll;
typedef pair<ll, ll> llP;A
typedef pair<int, int> intP;
typedef std::priority_queue<int> IntPrioQueue; //Z->A
typedef std::priority_queue<int, std::vector<int>, std::greater<int> > IntReversePrioQueue; //A->Z
//abc035c imos
void solve(void){
    //input
    int n, q;
    cin >> n >> q;
    rep(q, i){
        int l, r; scanf("%d%d\n", &l, &r);
        field[l-1]++; field[r]--;
    }
    int accSum = 0;
    rep(n, i){
        accSum += field[i];
        if (accSum%2) putchar('1');
        else putchar('0');
    }
    cout << '\n';
}

int main(void){
  solve();
  return 0;
}
