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
    ll n;
    scanf("%lld\n", &n);
    ll small=1, large=n;
    for (;small * small <= n; small++){
        if(n % small == 0) large = n / small;
    }
    ll digit = 0;
    while(large > 0) {
        large /= 10;
        digit++;
    }
    printf("%lld\n", digit);
}

int main(void){
  solve();
  return 0;
}
