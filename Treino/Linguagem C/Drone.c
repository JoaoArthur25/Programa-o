#include <stdio.h>
#include <math.h>

int main() {
   float xDrone,yDrone;
   printf("Digite o valor de x das coordenadas do pouso do drone:\n");
   scanf("%f",&xDrone);
   printf("Digite o valor de y das coordenadas do pouso do drone:\n");
   scanf("%f",&yDrone);
    if((xDrone>=4 && xDrone<=14 && yDrone>=4 && yDrone<=10) || (xDrone>=16 && xDrone<=26 && yDrone>=2 && yDrone<=12))
    {
    	printf	("O seu drone esta pousando em uma zona permitida!\n");
	}
	else
	{
		printf("O seu drone esta pousando em uma zona proibida!\n");
	}
	
    return 0;
    
}
