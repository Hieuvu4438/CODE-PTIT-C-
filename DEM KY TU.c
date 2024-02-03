#include<stdio.h>
#include<string.h>
#include<math.h>

char a[1005];

int main(){
	fgets(a, sizeof(a), stdin);
	int demchu = 0;
	int demso = 0;
	int dem = 0;
	int dai = strlen(a) - 1;
	for(int i = 0; i < dai; i++){
		if((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')) demchu++;
		else if((a[i] >= '0' && a[i] <= '9')) demso++;
		else dem++;	
	}
	printf("%d %d %d", demchu, demso, dem);
}
