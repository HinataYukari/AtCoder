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

void solve(void){
    int human, foots;
    scanf("%d%d\n", &human, &foots);
    bool flag = false;
    rep(foots / 4 + 1, i) {
        if (flag) break;
        int l = 0, r = foots / 3 - i + 1;
        while (l <= r && !flag) {
            int j = (l + r) / 2;
            int k = human - i - j;
            int temp_foots = i * 4 + j * 3 + k * 2;
            if (temp_foots == foots && k >= 0) {
                flag = true;
                printf("%d %d %d\n", k, j, i);
            }
            else if(temp_foots > foots) r = j - 1;
            else l = j + 1;
        }
    }
    if (!flag) printf("%d %d %d\n", -1, -1, -1);
}

int main(void){
  solve();
  return 0;
}
