#include <stdio.h>
#include <math.h>

int main(){
	int a, b; scanf("%d%d", &a, &b);
	int cana = sqrt(a);
	int canb = sqrt(b);
	
	
	if(cana <= 1) cana = 2;
	printf("%d\n",canb - cana + 1);
	for(int i = cana ; i <= canb; i++){
		
		printf("%d\n",i * i);
	}
}