#include <stdio.h>
int main(){
	int tempo,velMedia,litros,kilometros;
	
	printf("Digite o tempo de viagem em horas:\n");
	scanf("%d",&tempo);
	printf("Digite a velocidade media em km por hora:");
	scanf("%d",&velMedia);
	
	kilometros= (tempo*velMedia);
	litros= (kilometros/12);
	printf("Os litros necessarios sao:%d",litros);
	return 0;
	
}