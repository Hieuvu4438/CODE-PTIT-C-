#include <stdio.h> 
#include <math.h>

int find(int n){
	for(int i=2; i<=sqrt(n);i++){
		if(n%i==0)
			return i;
	}
	return n;
}

int find2(int n){
	if(n==1)
		return 1;
	if(n%2==0)
		return 2;
	for(int i=3; i<=n; i+=2){
		if(n%i==0)
			return i;
	}
}

int prime[100001];

void sang(){
	for(int i=1; i<=100000; i++){
		prime[i]=i;
	}
	for(int i=2; i<=sqrt(100000); i++){
		if(prime[i]==i){
			for(int j=i*i; j<=100000; j+=i){
				if(prime[j]==i)
					prime[j] = i;
			}
		}
	}
}

int main(){
	sang();
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		for(int i = 1; i<=n;i++){
			printf("%d ", prime[i]);
		}
		printf("\n");
	}
}
