#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define rep(n, i) for(long i = 0; i < n; i++)
#define MOD 1000000007
#define MAX 100000
int nck[MAX][MAX];

int compare_int(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

void solve(void){
    long n, c;
    scanf("%ld\n", &n);
    c = n+1;

    long as[c], ac[c];
    rep (c, i) {
        scanf("%ld ", &as[i]);
        ac[i] = as[i];
    }

    rep (c+1 ,i){
        nck[i][0] = 1;
        nck[i][i] = 1;
    }
    for (long i = 1; i <= c; i++) {
        for (long j = 1; j < i; j++) {
            nck[i][j] = nck[i-1][j] + nck[i-1][j-1];
            nck[i][j] %= MOD;
        }
    }

    //daburiのindexを取得
    qsort(ac, c, sizeof(long), compare_int);
    long daburi;
    rep (c-1, i) if (ac[i] == ac[i+1]) daburi = ac[i];
    long indexes[2], key = 0;
    rep(c, i) if (as[i] == daburi) indexes[key++] = i;

    long outsiders = c + indexes[0] - indexes[1] - 1;

    for (long l = 0; l <= outsiders; l++) {
        long long ans = nck[c][l+1] - nck[outsiders][l];
        printf("%lld\n", ans);
    }
    for (long k = outsiders+2; k <= c; k++) {
        printf("%d\n", nck[c][k]);
    }
}

int main(void){
  solve();
  return 0;
}
