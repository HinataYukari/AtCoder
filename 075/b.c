#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define rep(n, i) for(int i = 0; i < n; i++)
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

void solve(void){
    int H, W;
    scanf("%d %d\n", &H, &W);
    char map[H][W];
    rep(H, i) rep(W, j) scanf("%c\n", &map[i][j]);

    rep (H, i){
        rep(W, j){
            if (map[i][j] == '#') printf("#");
            else {
                int ans = 0;
                if (i > 0) if (map[i-1][j] == '#') ans++;
                if (i < H-1) if (map[i+1][j] == '#') ans++;
                if (j > 0) if (map[i][j-1] == '#') ans++;
                if (j < W-1) if (map[i][j+1] == '#') ans++;
                if (i > 0 && j > 0) if (map[i-1][j-1] == '#') ans++;
                if (i > 0 && j < W-1) if (map[i-1][j+1] == '#') ans++;
                if (i < H-1 && j > 0) if (map[i+1][j-1] == '#') ans++;
                if (i < H-1 && j < W-1) if (map[i+1][j+1] == '#') ans++;
                printf("%d", ans);
            }
        }
        printf("\n");
    }
}

int main(void){
  solve();
  return 0;
}
