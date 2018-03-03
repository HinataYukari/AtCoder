#include <iostream>
#include <cmath>
#include <cstdlib>
#include <algorithm>

#define Rep(b, e, i) for(int i = b; i <= e; i++)
#define rep(n, i) Rep(0, n-1, i)
#define INF 10000000

using namespace std;

int train(int as[], int n, bool new_flag[], int now_index, int ans){
    if (now_index == 1) return ans;
    if (new_flag[now_index]) return -1;
    else {
        new_flag[now_index] = true;
        return train(as, n, new_flag, as[now_index], ans+1);
    }
}

void solve(void){
    int n;
    cin >> n;
    int as[n];
    rep(n, i) {
        cin >> as[i];
        as[i]--;
    }
    bool flags[n];

    rep(n ,i) flags[as[i]] = true;
    if (!flags[1]) cout << -1 << endl;
    else {
        int ans = 0;
        bool new_flag[n];
        fill(new_flag, new_flag+n, false);
        ans = train(as, n, new_flag, 0, ans);
        cout << ans << endl;
    }
}

int main(void){
  solve();
  return 0;
}
