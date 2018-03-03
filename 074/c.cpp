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
#define MAX 100

void solve(void){
    double a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    double water = 0, sugar = 0, noudo = 0;
    rep(MAX, j) {
        rep(MAX, i){
            if ((a*i + b*j) * 100 > f) break;
            double temp_water  = (a*i + b*j) * 100;
            rep(MAX, l){
                rep(MAX, k){
                    if (((a*i + b*j) * e >= c * k + d * l) and (temp_water + c * k + d * l <= f)){
                        double temp_sugar = c * k + d * l;
                        double temp_noudo = temp_sugar / (temp_water + temp_sugar);
                        if (temp_noudo > noudo) {
                            water = temp_water;
                            sugar = temp_sugar;
                            noudo = temp_noudo;
                        }
                    }
                }
            }
        }
    }
    if (water == 0) water = a*100;
    cout << water + sugar << ' ' << sugar << endl;
}

int main(void){
  solve();
  return 0;
}
