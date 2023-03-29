#include <stdio.h>
#include <math.h>

int main() 
{
	int escolha;
	float a,b,c;
	do 
	{
	
	printf("Escolha a sua operacao:\n 0.Fechar programa.\n 1.Soma.\n 2.Subtracao.\n 3.Multiplicacao.\n 4.Divisao.\n 5.Raiz quadrada.\n 6.Elevar ao quadrado.\n 7.Elevar ao cubo.\n");
	scanf("%d",&escolha);
	
	switch (escolha)
	{
		case 0: 
		printf("Fechando programa...\n");
		break;
		
		case 1:
		printf("Escolha o primeiro numero para somar:\n");
		scanf("%f",&a);
		printf("Escolha o segundo numero para somar:\n");
		scanf("%f",&b);
		c = a + b;
		printf("O resultado e: %.1f\n",c);
		break;
		
		case 2:
		printf("Escolha o primeiro numero para subtrair:\n");
		scanf("%f",&a);
		printf("Escolha o segundo numero para subtrair:\n");
		scanf("%f",&b);
		c = a - b;
		printf("O resultado e: %.1f\n",c);
		break;
		
		case 3:
		printf("Escolha o primeiro numero para multiplicar:\n");
		scanf("%f",&a);
		printf("Escolha o segundo numero para multiplicar:\n");
		scanf("%f",&b);
		c = a * b;
		printf("O resultado e: %.1f\n",c);
		break;
		
		case 4:
		printf("Escolha dividendo:\n");
		scanf("%f",&a);
		printf("Escolha o divisor:\n");
		scanf("%f",&b);
		if (b!=0)
		{
		c = a / b;
		printf("O quociente e: %.1f\n",c);
		break;
	}
	else
	{
		printf("Nao e possivel utilizar 0 como divisor.\n");
		break;
	}
		case 5:
		printf("Escolha o numero para tirar a raiz:\n");
		scanf("%f",&a);
		if (a>0)
		{	
		c = sqrt(a);
		printf("O resultado e: %.1f\n",c);
		break;
	}
	else
	{
		printf("Nao existem raizes  negativas.\n");
		break;
	}
		
		case 6:
		printf("Escolha o numero para elevar ao quadrado:\n");
		scanf("%f",&a);
		c = a * a;
		printf("O resultado e: %.1f\n",c);
		break;
		
		case 7:
		printf("Escolha o numero para elevar ao cubo:\n");
		scanf("%f",&a);
		c = a * a * a;
		printf("O resultado e: %.1f\n",c);
		break;
		
		default:
			printf("Opcao invalida.\n");
	}
} 

while (escolha != 0);
   
   return 0;
   
}



	