#include <stdio.h>
#include <stdlib.h>
int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}
void solve(void){
  int H, W;
  int* A, c;
  A = malloc(sizeof(int) * H * W);
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      scanf("%d ", &A[i * H + j]);
    }
    scanf("\n");
  }
  c = malloc(sizeof(int) * 100);
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      scanf("%d ", &c[i * 10 + j]);
    }
    scanf("\n");
  }
  qsort(A, 4, sizeof(int), compare_int);
  int kind[9] = {100};
  int k = 0;
  int Flag = 0;
  if (A[0] != 1) kind[0] = A[0]; k++;
  for (int i = 1; i < H * W - 1; i++) {
    if (A[i] != A[i + 1] && A[i + 1] != 1) {
      kind[a[i+1]]; k++;
    }
  }
  for (int i = 0; i < 9; i++) {
    if (kind[i] < 10) {
      break; Flag = 1;
    }
  }
  if (Flag) printf("0\n");
}

int main(void) {
  solve();
  return 0;
}
