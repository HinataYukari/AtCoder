#include <stdio.h>
#include <stdlib.h>
int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}
int main(void){
  int N, k, a, b, c, d;

  k = 1;
  scanf("%d", &N);
  a = N / 1000;
  b = (N - a * 1000) / 100;
  c = (N - a * 1000 - b * 100) / 10;
  d = N - a * 1000 - b * 100 - c * 10;
  int list[] = {a,b,c,d};
  qsort(list, 4, sizeof(int), compare_int);
  if (a == b && b == c && c == d) printf("Yes\n");
  else if ((a == b && b == c) || (d == b && b == c)) printf("Yes\n");
  else printf("No\n");
  return 0;
}
