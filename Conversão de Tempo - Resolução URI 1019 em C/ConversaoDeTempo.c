#include <stdio.h>
 
int main() {

    int minutos, horas, segundos, x;
    
    scanf("%d", &x);
    
    horas = x / 3600;
  
  	minutos = x % 3600 / 60;
    	
	segundos = x % 60;
           
    
    printf("%d:%d:%d\n", horas, minutos, segundos);
 
    return 0;
}
