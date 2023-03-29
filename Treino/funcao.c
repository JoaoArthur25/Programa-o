#include <stdio.h>
#include <stdlib.h>

// 1ª questão, crie duas funções que subitraiam x de y/adiciona x em y
int soma(x,y){
	
	return y + x;
}

int subtracao(x,y){
	return x - y;
}

int main(){
	
	int x, y;
	
	printf("Digite um valor de x: ");
	scanf("%d",&x);
	
	printf("\n");
	
	printf("Digite um valor de y: ");
	scanf("%d",&y);
	
	printf("A soma dos valores eh: %d\n",soma(x,y));
	printf("A subtracao dos valores eh: %d",subtracao(x,y));
	
	return 0;
}