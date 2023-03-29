#include <stdio.h>

int main ()
{
    char nome[30];
    float idade;
    
    
	

	printf("Digite o primeiro nome e a idade em anos da sua mae, senhor Bill Brilas.\n");
	printf("Nome:\n");
	gets(nome);
	printf("Idade:\n");
	scanf("%f",&idade);
	
	if (idade <=0)
	{
		printf("Digite uma idade valida.\n");
	}
	
	else if (idade > 0 && idade <= 10)
	{
		printf("O plano de saude de %s custa R$30.00",nome);
	}
	else if(idade > 10 && idade <=29)
	{
		printf("O plano de saude de %s custa R$60.00",nome);
	}
	else if(idade > 29 && idade <= 45)
	{
		printf("O plano de saude de %s custa R$120.00",nome);
	}
	else if(idade > 45 && idade <= 59)
	{
		printf("O plano de saude de %s custa R$150.00",nome);
	}
	else if (idade> 59 && idade <=65)
	{
		printf("O plano de saude de %s custa R$250.00",nome);
	}
	else if(idade > 65)
	{
		printf("O plano de saude de %s custa R$400.00",nome);
	}

        
        
        return 0;
         

}