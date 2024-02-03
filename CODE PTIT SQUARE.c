#include <stdio.h>

int main() {
  int T;
  scanf("%d", &T);
  while (T--) {
    int N;
    scanf("%d", &N);
    long long square = N * N;
    printf("%lld\n", square);
  }
  return 0;
} 
