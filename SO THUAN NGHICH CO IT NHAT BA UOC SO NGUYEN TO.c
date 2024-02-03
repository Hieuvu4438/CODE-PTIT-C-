#include <stdio.h>
#include <math.h>

int tn(int n){
	int tmp = n, rev = 0;
	while(n){
		rev = rev * 10 + n%10;
		n /= 10;
	}
	return tmp == rev;
}

int check(int n){
	int ans = 0;
	for(int i = 2; sqrt(n); i++){
		int cnt = 0;
		while(n%i==0){
			++cnt;
			n/=i;
		}
		if(cnt!=0) ++ans;
	}
	if(n!=1)
		++ans;
	return ans >= 3;	
}

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int ok = 0;
	for(int i = a; i <=b;i++){
		if(check(i) && tn(i)){
			printf("%d ", i);
			ok = 1;
		}		
	}
	if(!ok)
		printf("-1");
}

