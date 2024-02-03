#include<stdio.h>
#include<string.h>
#include<math.h>

char a[1005];
char b[1005];
int main(){
	fgets(a, sizeof(a), stdin);
	scanf("\n");
	fgets(b, sizeof(b), stdin);
	int dai = strlen(a) - 1;
	int dai2 = strlen(b) - 1;
	for(int i = 0; i < dai; i++){
		int dem1 = 0;
		int dem = 0;
		if(a[i] == b[0]){
			for(int j = i; j < i + dai2; j++){
				if(a[j] != b[dem1]) break;
				dem1++;
				if(j == i + dai2 - 1){
					i = i + dai2 ;
					dem = 1;
				}
			}
		}
		if(dem != 1) printf("%c", a[i]);
	}
}
