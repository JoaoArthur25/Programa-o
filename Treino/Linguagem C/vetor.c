#include <stdio.h>

int main()
{
	char nome1 [4];
	char nome2 [4];
	char temporario;
	
	printf("Digite dois nomes de quatro caracteres.\n\n");
	
	printf("Digite o primeiro nome: \n");
	gets(nome1);
	
	printf("Digite o segundo nome: \n");
	gets(nome2);
	
printf("%s \t %s\n", nome1, nome2);
	
	temporario = nome1[0];
	nome1[0] = nome2[3];
	nome2[3] = temporario;
	
	temporario = nome1[3];
	nome1[3] = nome2[0];
	nome2[0] = temporario;
	
	printf("%s \t %s", nome1, nome2);
	
	
	
	return 0;
}
