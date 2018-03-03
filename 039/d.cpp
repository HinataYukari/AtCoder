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
#define MAX 124
#define INF (ll)1<<62
#define MOD 1000000007

char mapAfter[MAX][MAX];
char mapBefore[MAX][MAX];
char mapSecond[MAX][MAX];

int dx8[8]={1,0,-1,1,-1,1,0,-1};
int dy8[8]={1,1,1,0,0,-1,-1,-1};

void solve(void){
    int h, w;
    cin >> h >> w;
    rep(h, y) scanf("%s\n", &mapAfter[y]);
    rep(h, y) rep(w, x){
        bool allBlack = true;
        rep(8, k){
            int nx = x + dx8[k], ny = y + dy8[k];
            if (nx >= 0 and nx < w and ny >= 0 and ny < h) {
                if (mapAfter[ny][nx] == '.') allBlack = false;
            }
        }
        if (allBlack and mapAfter[y][x] == '#') mapBefore[y][x] = '#';
        else mapBefore[y][x] = '.';
    }
    rep(h, y) rep(w, x){
        bool noBlack = true;
        rep(8, k){
            int nx = x + dx8[k], ny = y + dy8[k];
            if (nx >= 0 and nx < w and ny >= 0 and ny < h) {
                if (mapBefore[ny][nx] == '#') noBlack = false;
            }
        }
        if (noBlack and mapBefore[y][x] == '.') mapSecond[y][x] = '.';
        else mapSecond[y][x] = '#';
    }
    bool match = true;
    rep(h, y) rep(w, x) {
        if (mapAfter[y][x] != mapSecond[y][x]) match = false;
    }
    if (match) {
        printf("possible\n");
        rep(h, y){
            rep(w, x) putchar(mapBefore[y][x]);
            putchar('\n');
        }
    } else printf("impossible\n");
    /*
    rep(h, y){
        rep(w, x) putchar(mapBefore[y][x]);
        putchar('\n');
    }
    rep(h, y){
        rep(w, x) putchar(mapSecond[y][x]);
        putchar('\n');
    }*/
}

int main(void){
  solve();
  return 0;
}
