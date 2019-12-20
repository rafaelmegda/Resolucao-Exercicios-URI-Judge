#include <stdio.h>


int main(){
	
	int a,b,c,maior;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	if(a > b && a > c){
		maior = a;
	}
	if(a > b && a < c){
		maior = c;
	}
	if(a < b && b > c){
		maior = b;
	}
	if(a < b && b < c){
		maior = c;
	}
	if(a < c && c > b){
		maior = c;
	}
	if(a < c && c < b){
		maior = b;
	}
	
	printf("%d eh o maior\n", maior);
}
