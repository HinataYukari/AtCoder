#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define rep(n, i) for(int i = 0; i < n; i++)
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

void findLoop(int indexes[], int bs[], int N){
    int start = 0; //ループの入口
    while(start < N){
        for (int end = start+1; end < N; end++){
            if (bs[start] == bs[end]) {
                indexes[0] = start;
                indexes[1] = end-1;
                return;
            }
        }
        start++;
    }
    indexes[0] = 0; indexes[1] = N-1;
}

void solve(void){
    int N, a;
    char* k[100001];
    scanf("%d %d\n", &N, &a);
    scanf("%s", k);
    int bs[N];
    rep(N, i) {
        scanf("%d ", &bs[i]);
        bs[i]--;
    }
    int k_len = strlen(k);

    int process[N];
    int temp_index = a-1;
    rep(N, i) {
        int temp = bs[temp_index];
        process[i] = temp;
        temp_index = temp;
    }
    int indexes[2] = {0,0};
    findLoop(indexes, process, N);
    int start = indexes[0];
    int end = indexes[1];
    int ans;

    int length = end - start + 1;
    if (k_len > 18) {
        int k_mod_l = 0, i = 0;
        while (k[i] != '\0') {
            k_mod_l = (10 * k_mod_l + (int)(k[i]) - (int)'0') % length;
            i++;
        }
        int nk = (k_mod_l - start - 1 + length) % length + start;
        ans = process[nk];
    }
    else {
        int l = 0;
        for (int i = 0; i < k_len; i++) l = l*10 + (int)k[i] - (int)'0';
        printf("%d\n", l);
        if (l - 1 > start) {
            int nk = (l - start - 1) % length + start;
            ans = process[nk];
        }
        else ans = process[l-1];
    }


    printf("%d\n", ans+1);
    /*
    printf("%d %d\n", indexes[0], indexes[1]);
    rep(N, i) printf("%d ", process[i]);
    */
}

int main(void){
  solve();
  return 0;
}
