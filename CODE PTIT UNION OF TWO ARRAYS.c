#include <stdio.h>
void printArray(int a[], int n){
    int i ;
    for (i = 0; i <n; i++)
        printf("%d ", a[i]);
}
void merge(int a[], int b[],int n, int m){
    int c[n + m];
    int count = 0;
    for (int i = 0; i <n;i++){
        c[count] = a[i];
        count++;
        printArray(c,count);
    }
    for (int i = 0; i <m;i++){
        c[count] = b[i];
        count++;
    }
}
void sapxep(int m[], int size){
	for(int i = 0; i < size; i++){
		for(int j = i+1; j < size; j++){
			if(m[i] > m[j]){
				int temp = m[i];
				m[i] = m[j];
				m[j] = temp;
			}
		}
	}
}
int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n];
	int b[m];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		scanf("%d", &b[i]);
	}
	sapxep(a, n);
	sapxep(b, m);
	
}
