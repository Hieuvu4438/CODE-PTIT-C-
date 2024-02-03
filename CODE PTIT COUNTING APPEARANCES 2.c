#include <stdio.h>

int main(){
	int t; scanf("%d", &t);
	for(int k = 1; k <= t; k++){
		int n; scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
	}
	printf("Test %d:\n", k);
		int res;
		for(int i = 0; i < n; i++){ //2 3 3 2 1 9 5	
			int check = 1;
			int cnt = 1;
			for(int j = 0; j < i ; j++){
				if(a[i] == a[j]){  
					check = 0;
					break;
				} 
			}
			if(check == 1){
				for(int j = i + 1; j < n; j++){
					if(a[i] == a[j]) ++cnt;
				} 
			if(cnt == 1) printf("%d appears %d time\n", a[i], cnt);
			else if(cnt > 1) printf("%d appears %d times\n", a[i], cnt);
			}				
		}
	}
}
