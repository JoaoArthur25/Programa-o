// 2ª questão, crie uma função que retorne o maior valor entre a,b e c
#include <stdio.h>
#include <stdlib.h>

int maiorValor(a,b,c){
	
	if(a > b && a > c){
		return a;
	}
		if(b > a && b > c){
		return b;
	}
		if(c > b && c > a){
		return c;
	}
	
}

int main(){
	
	int a,b,c;
	
	printf("Digite o valor de a: ");
	scanf("%d",&a);
	
	printf("Digite o valor de b: ");
	scanf("%d",&b);
	
	printf("Digite o valor de c: ");
	scanf("%d",&c);
	
	printf("O maior valor eh: %d",maiorValor(a,b,c));
	
	return 0;
}