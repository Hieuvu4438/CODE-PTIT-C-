#include <stdio.h>
int main (){
	int n;
	scanf("%d", &n);
	while (n--){
		int a;
		scanf("%d", &a);
		int last, first;
		last = a % 10;
		while (a != 0){
			first = a % 10;
			a /= 10;
		}
		if(first == last){
			printf ("YES\n");
		} else{
			printf ("NO\n");
		}
	}
	return 0;
}
