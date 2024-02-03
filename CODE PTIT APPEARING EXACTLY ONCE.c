#include <stdio.h>
#include <math.h>

int main(){
	int n,c=0;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		int cnt = 0;
		for(int j = 0; j < n; j++){
			if(a[i] == a[j]) cnt++;
		}	
		if(cnt == 1) c+=1;
	}
	printf("%d\n",c);
	for(int i = 0; i < n; i++){
		int cnt = 0;
		for(int j = 0; j < n; j++){
			if(a[i] == a[j]) cnt++;
		}	
		if(cnt == 1) printf("%d ", a[i]);
	}
}
