#include <stdio.h>

long long tribo(int n, long long* a){
  long long x;
  if (n <= 1) x = a[n];
  else {
    for (int i = 0; i < n - 1; i++){
      long long temp = a[0];
      a[0] = a[1];
      a[1] = a[0] + temp;
    }
    x = a[1];
  }
  return x;
}

int main(void){
  int N;
  long long a[] = {2,1};
  scanf("%d\n", &N);
  printf("%lld\n", tribo(N, a));
  return 0;
}
