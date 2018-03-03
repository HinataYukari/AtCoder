#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <functional>
using namespace std;

#define Rep(b, e, i) for(int i = b; i <= e; i++)
#define rep(n, i) Rep(0, n-1, i)
#define MAX 8001
#define INF (ll)1e10
#define MOD 1000000007

char s[MAX];
int gx, gy;

void step(int nx, int ny){

}

void solve(){
    scanf("%s\n", s);
    scanf("%d%d\n", &gx, &gy);
    int nx = 0, ny = 0;
    bool flag = false;
    Rep(0, strlen(s), i){
        if (s[i] == 'T') {
            if (ny < gy) {
                swap(gx, gy); swap(nx, ny);
            }
            else {
                swap(gx, gy); swap(ny, gx);
                swap(nx, ny);
            }
        }
        else nx++;
        if (nx == gx && ny == gy && i == strlen(s)-1) {
            flag = true; break;
        }
    }
    printf("%s\n", flag ? "Yes" : "No");
}

int main(){
  solve();
  return 0;
}
