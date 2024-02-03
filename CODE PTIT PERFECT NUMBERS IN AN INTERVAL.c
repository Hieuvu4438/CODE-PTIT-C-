#include <stdio.h>
#include <math.h>
int isPerfectNumber(int N) {
  int sum = 1;
  int i;
  for (i = 2; i <= sqrt(N); i++) {
    if (N % i == 0) {
      sum += i + N / i;
    }
  }
  return (sum == N && sum > 1);
}

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	if(a < b){
		for(int i = a; i <= b; i++){
			if(isPerfectNumber(i)) printf("%d ", i);
		}
	}
	if(a > b){
		for(int i = b; i <= a; i++){
			if(isPerfectNumber(i)) printf("%d ", i);
		}
	}

}
