#include<stdio.h>
#include<string.h>
#include<math.h>

int a[100005];
int b[1000000] = {0};

int main(){
	int t;
	scanf("%d", &t);
	int dem = 1;
	while(t--){
		int n;
		scanf("%d", &n);
		for(int i = 0; i < 100005; i++){
			b[i] = 0;
		}
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			b[a[i]]++;
		}
		printf("Test %d:\n", dem);
		dem++;
		for(int i = 0; i < n; i++){
			if(b[a[i]] >= 1){
				printf("%d xuat hien %d lan\n", a[i], b[a[i]]);
				b[a[i]] = 0;
			}
		}
	}
}
