#include <stdio.h>

int main(void){
  int A, B, C, D, N;
  int op1, op2, op3;
  scanf("%d", &N);
  A = N / 1000;
  B = (N - A * 1000) / 100;
  C = (N - A * 1000 - B * 100) / 10;
  D = N - A * 1000 - B * 100 - C * 10;
  if (A + B + C + D == 7) {
    op1 = '+'; op2 = '+'; op3 = '+';
  } else if (A + B + C - D == 7) {
    op1 = '+'; op2 = '+'; op3 = '-';
  } else if (A + B - C + D == 7) {
    op1 = '+'; op2 = '-'; op3 = '+';
  } else if (A + B - C - D == 7) {
    op1 = '+'; op2 = '-'; op3 = '-';
  } else if (A - B + C + D == 7) {
    op1 = '-'; op2 = '+'; op3 = '+';
  } else if (A - B + C - D == 7) {
    op1 = '-'; op2 = '+'; op3 = '-';
  } else if (A - B - C + D == 7) {
    op1 = '-'; op2 = '-'; op3 = '+';
  } else if (A - B - C - D == 7) {
    op1 = '-'; op2 = '-'; op3 = '-';
  }
  printf("%d%c%d%c%d%c%d=7\n", A, op1, B, op2, C, op3, D);
  return 0;
}
