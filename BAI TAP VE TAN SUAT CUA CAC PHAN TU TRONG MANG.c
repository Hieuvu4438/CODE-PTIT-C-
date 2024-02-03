#include <stdio.h> 
#include <math.h>
//BAI 1: LIET KE CAC GIA TRI TRONG MANG, MOI GIA TRI CHI LIET KE 1 LAN
//int mark[1000001] = {0};
//int main(){
//	int n;
//	scanf("%d", &n);
//	int a[n];
//	for(int i = 0; i < n; i++){
//		scanf("%d", &a[i]);
//	}
//	for(int i = 0; i < n; i++){
//		if(mark[a[i]] == 0){
//			printf("%d ", a[i]);
//			mark[a[i]] = 1;
//		}
//	}
//}

//BAI 2: TIM SO CO SO LAN XUAT HIEN NHIEU NHAT TRONG MANG
//CACH 1:
int cnt[1000001] = {0};
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
}
	for(int i = 0; i < n; i++){
		cnt[a[i]]++;
	}
	int dem = 0, res;
	for(int i = 0; i < n; i++){
		if(dem < cnt[a[i]]){
			dem = cnt[a[i]];
			res = a[i];
	}
		else if(dem == cnt[a[i]]){
			if(res > a[i]) res = a[i];
		}
	}
	printf("%d %d", res, dem);
}

//BAI 3: LIET KE CAC GIA TRI TRONG MANG KEM THEO TAN SUAT CUA NO
int cnt[1000001] = {0};
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
}
	for(int i = 0; i < n; i++){
		cnt[a[i]]++;
	}
	for(int i = 0; i < n; i++){
		if(cnt[a[i]]!=0){
			printf("%d %d\n", a[i], cnt[a[i]]);
			cnt[a[i]] = 0;
		}		
	}
}

//BAI 4: LIET KE CAC SO CHI XUAT HIEN TRONG MANG 1 LAN:
int cnt[1000001] = {0};
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
}
	for(int i = 0; i < n; i++){
		cnt[a[i]]++;
	}
	for(int i = 0; i < n; i++){
		if(cnt[a[i]]==1){
			printf("%d %\n", a[i], cnt[a[i]]);
		}
	}
}
