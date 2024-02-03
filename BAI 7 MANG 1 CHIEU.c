#include <stdio.h>

//int main (){
//	dataType ArrayName[sizrOfArray];
//	a[index]
//	int a[5]; //khai bao mot mang so nguyen int co toi da 100 phan tu
//	scanf("%d", &a[1]);
//	printf("Gia tri cua phan tu thu 2 trong mang la : %d", a[1]);
//	return 0;
//}

//int main (){
//	int a[5];
//	int i;
//	for(i = 0; i < 5; i++){
//		printf("Nhap gia tri cho phan tu thu %d :", i + 1);
//		scanf("%d", &a[i]);	
//	}
//	
//	for(i = 0; i < 5; i++){
//		printf(" %d", a[i]);
//	}
//	return 0;
//}

//int main (){
//	int n;
//	scanf("Nhap so luong phan tu cua mang :");
//	scanf("%d", &n);
//	int a[n];
//	int i = 0;
//	for(i = 0; i < n; i++){
//		scanf("%d", &a[i]);
//	}
//	for(i = 0; i < n; i++){
//		printf("%d ", a[i]);	
//	}
//	return 0;
//}

//int main (){
//	int a[5] = {2, 3, 4, 1, 6};
//	int i;
//	for(i = 0; i < 5; i++){
//		printf("%d ", a[i]);
//	}
//	return 0;
//}

//int main (){
//	int a[100] = {2, 3, 4, 1, 6};
//	int i;
//	for (i = 0; i < 100; i++){
//		printf("%d ", a[i]);
//	}
//	return 0;
//}

//int main (){
//	int n;
//	scanf("%d", &n);
//	int a[n];
//	return 0;
//}

//void nhap(int a[], int n){
//	printf("Nhap cac phan tu trong mang\n");
//	int i;
//	for(i = 0; i < n; i++){
//		scanf("%d", &a[i]);
//	}
//}
//int main(){
//	int n, a[1000];
//	scanf("%d", &n);
//	nhap(a, n); 
//	int i;
//	for(i = 0; i < n; i++){
//		printf("%d", a[i]);
//	}
//	return 0;
//}

//void nhap(int a[], int n){
//	printf("Nhap cac phan tu trong mang\n");
//	int i;
//	for(i = 0; i < n; i++){
//		scanf("%d", &a[i]);
//	}	
//}
//void in(int a[], int n){
//	int i;
//	for(i = 0; i < n; i++){
//		printf("%d ", a[i]);
//	}
//} 
//int main(){
//	int n, a[1000];
//	scanf("%d", &n);
//	nhap(a, n); 
//	int i;
//	for(i = 0; i < n; i++){
//		printf("%d ", a[i]);
//}
//	in(a, n);
//	return 0;
//}


int nt(int n){
	int i;
	for(i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int cnt = 0; 
	for(i = 0; i < n; i++){
		if(nt(a[i])) ++cnt;
	}
	printf("%d", cnt);
	return 0;
}
