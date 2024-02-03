#include <stdio.h>
#include <math.h>

int a(int N) {
  int sum = 1;
  int i;
  for (i = 2; i <= sqrt(N); i++) {
    if (N % i == 0) {
      sum += i + N / i;
    }
  }
  return (sum == N && sum > 1);
}

int main() {
  int N;
  scanf("%d", &N);

  if (a(N)) {
    printf("1\n");
  } else {
    printf("0\n");
  }

  return 0;
}
