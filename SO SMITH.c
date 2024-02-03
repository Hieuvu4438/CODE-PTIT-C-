#include <stdio.h>
#include <math.h>

int sum(int n){
	int ans = 0;
	while(n){
		ans += n % 10;
		n/=10;
	}
	return ans;
}

int smith(int n){
	int sum1 = sum(n);
	int sum2 = 0;
	int tmp = n;
	for(int i = 2; i <= sqrt(n); i++){
		while(n%i==0){
			sum2 += sum(i);
			n/=i;
		}
	}
	if(tmp == n) 
		return 0;
	if(n!=1){
		sum2+=sum(n);
	}
	return sum1==sum2;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		if(smith(n)) printf("YES\n");
		else printf("NO\n");
	}
}
