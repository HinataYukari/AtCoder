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
#define MAX 200000
#define INF (ll)1<<62
#define MOD 1000000007

typedef long long ll;
typedef pair<ll, ll> llP;
typedef pair<int, int> intP;
typedef std::priority_queue<intP> IntPrioQueue; //Z->A

//abc038d
void solve(void){
    //input
    int n; scanf("%d\n", &n);
    vector<intP> boxes(n);
    rep(n, i){
        int w, h; scanf("%d %d\n", &w, &h);
        intP tempBox = intP(w, h);
        boxes[i] = tempBox;
    }
    sort(boxes.begin(), boxes.end());
    rep(boxes.size(), k) cout << boxes[k].first << ' ' << boxes[k].second << ' ';
    cout << endl;
    printf("%d\n", boxes.size());
}

int main(void){
  solve();
  return 0;
}
