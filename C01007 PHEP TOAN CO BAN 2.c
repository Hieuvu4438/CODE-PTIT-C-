#include <stdio.h>

int main(){
	int a, b; scanf("%d%d", &a, &b);
	float chia = (float)a / b;
	long long tich = (long long)a * b;
	printf("%d\n%d\n%lld\n%d\n%d\n%.2f", a + b, a - b, tich, a / b, a % b, chia);
	return 0;
}