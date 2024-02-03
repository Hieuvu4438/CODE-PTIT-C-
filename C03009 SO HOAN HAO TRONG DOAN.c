#include <stdio.h>
#include <math.h>

int checkperfect(int n){
	int res = n;
	int sum = 1;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0 && i != n / i){
			sum += i + n/i;
		}
		if(n % i == 0 && i == n/i) sum += i;
	}
	if(sum == res) return 1;
	else return 0;
}

int main(){
	int a, b; scanf("%d%d", &a, &b);
	if(a <= b){
		if(a == 1) ++a;
		for(int i = a; i <= b; i++){
			if(checkperfect(i)) printf("%d ", i);
		}
	}
	else{
		if(b==1) ++b;
		for(int i = b; i <= a; i++){
		if(checkperfect(i)) printf("%d ", i);
		}
	}
}