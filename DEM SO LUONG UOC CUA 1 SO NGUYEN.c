#include <stdio.h>
#include <math.h>
//CACH 1
int count(int n){
	int cnt = 0;
	for(int i = 1; i<=sqrt(n); i++){
		if(n%i==0){
			if(i!=n/i)
				cnt += 2;
			else ++cnt;
		}		
	}
	return cnt;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		printf("%d\n", count(n));
	}
}

//CACH 2
int count(int n){
	int res = 1;
	for(int i = 1; i <=sqrt(n); i++){
		int cnt = 0;
		if(n%i==0){
			++cnt;
			n/=i;	
		}
		res *= (cnt + 1);
	}
	if(n!=1)
		res *= 2;
	return res;
} 

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		printf("%d\n", count(n));
	}
}
