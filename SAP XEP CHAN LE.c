#include <stdio.h>
#include <math.h>
void sapxep(int a[], int n){
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] > a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int chan[n], le[n];
	int demchan = 0, demle = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			chan[demchan++] = a[i];
		}
		else{
			le[demle++] = a[i];
		}
	}
	sapxep(chan, demchan);
	sapxep(le, demle);
	for(int i = 0; i < demchan; i++)
		printf("%d ", chan[i]);
	for(int i = 0; i < demle; i++)
		printf("%d ", le[i]);
}
