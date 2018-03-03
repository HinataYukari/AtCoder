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
#define INF 10000000

typedef long long ll;
typedef pair<ll, ll> P;
typedef std::priority_queue<int> IntPrioQueue; //Z->A
typedef std::priority_queue<int, std::vector<int>, std::greater<int> > IntReversePrioQueue; //A->Z


int dx4[4]={1,0,-1,0};
int dy4[4]={0,1,0,-1};
int dx8[8]={1,0,-1,1,-1,1,0,-1};
int dy8[8]={1,1,1,0,0,-1,-1,-1};

void solve(void){
    int t; scanf("%d\n", &t);
    int n, m;
    scanf("%d\n", &n);
    queue<int> as;
    rep(n, i) {
        int temp;
        scanf("%d", &temp);
        as.push(temp);
    }
    scanf("%d\n", &m);
    queue<int> bs;
    rep(m, i) {
        int temp;
        scanf("%d", &temp);
        bs.push(temp);
    }
    bool flag = true;
    if (n < m) printf("no\n");
    else {
        while (bs.size()) {
            if (as.size() == 0) {
                flag = false; break;
            }
            int takoyaki = as.front(); as.pop();
            int customer = bs.front();
            if (takoyaki > customer) {
                flag = false; break;
            }
            else if (takoyaki + t < customer) continue;
            else bs.pop();
        }
        printf("%s\n", flag ? "yes" : "no");
    }

}

int main(void){
  solve();
  return 0;
}
