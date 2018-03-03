#include <stdio.h>

int abs(int a, int b){
  if ((a - b) > 0) return (a-b);
  else return (b-a);
}

int min_a(int *a, int n){
  int min = a[0];
  for (int i = 1; i < n; i++){
    if (min > a[i]) {
      min = a[i];
    }
  }
  return min;
}

int max_a(int *a, int n){
  int max = a[0];
  for (int i = 1; i < n; i++){
    if (max < a[i]) {
      max = a[i];
    }
  }
  return max;
}

int main(void){
  int N, Z, W, score;
  scanf("%d %d %d\n", &N, &Z, &W);
  score = abs(Z, W);
  int a[N];
  for (int i = 0; i < N; i++){
    scanf("%d\n", &a[i]);
  }
  int score_x[N];
  score_x[N-1] = abs(a[N-1], W);
  for (int x = 0; x < N-1; x++){
    Z = a[x];
    int score[N-x-1];
    for (int y = 0; y < N-x-1; y++){
      score[y] = abs(Z, a[y+x+1]);
    }
    score_x[x] = min_a(score, N-x-1);
  }
  printf("%d\n", max_a(score_x, N));

  return 0;
}
