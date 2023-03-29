#include <stdio.h>
int main ()
{
	printf("Digite um numero de tres casas:\n");
	int numero,dezena;
	scanf("%d",&numero);
	dezena = (numero/10)%10;
	printf("O numero da casa das dezenas e:%d",dezena);
	return 0;
	
}