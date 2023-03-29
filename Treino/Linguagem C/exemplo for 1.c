#include <stdio.h>
int main()
{
	int i = 0;
	
	// do{
	//  <bloco_de_comandos_>
	// }while(<condição>;
	
	do{
	
	printf("%d \n",i);
	i++;
	
	} while (i<=10);
	
	//imprime os números de 0 a 10 ma vertical
	
	//-------------------------------------------------------------------//
	
	// for(<variavel inicial>; <cond>; <incremento>)
	// {
	// <bloco_de_comandos>
	// }
	
	for(i=0;i<=10;i++) //para imprimir numeros de 0 a 10 na horizontal
	{
		printf("%d ",i);
	}
	//imprime os números de 0 a 10
	
	return 0;
	
	
}