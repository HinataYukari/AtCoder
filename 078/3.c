#include <stdio.h>

int main(void){
  int N, M, t, x, y;
  t = 0;
  scanf("%d %d\n", &N, &M);
  x = 1;
  for (int i = 0;i < M; i++){
    x *= 2;
  }
  y = 100 * (N - M) + 1900 * M;
  t += y * x;

  printf("%d\n", t);
  return 0;
}
