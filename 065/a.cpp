#include <iostream>
#include <cmath>
#include <cstdlib>
#include <algorithm>

#define Rep(b, e, i) for(int i = b; i <= e; i++)
#define rep(n, i) Rep(0, n-1, i)
#define INF 10000000

using namespace std;

void solve(void){
    int x, a, b;
    cin >> x >> a >> b;
    if (a >= b) cout << "delicious" << endl;
    else if (a + x >= b) cout << "safe" << endl;
    else cout << "dangerous" << endl;
}

int main(void){
  solve();
  return 0;
}
