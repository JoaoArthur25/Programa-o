#include <stdio.h>
#include <math.h>

int main()
{
	float x,y;
	
	printf("Digite as coordenadas x e y do drone:\n");
	printf("X:\n");
	scanf("%f",&x);
	printf("Y:\n");
	scanf("%f",&y);
	
	float distancia= sqrt(pow(x-3, 2)+pow(y-2, 2));
	
	if (distancia<=0 || x >= 12 && x <= 15 && y >= 10 && y <= 18)
	{
		printf("Drone dentro da regiao de pouso autorizado.\n");
	}
	else 
	{
		printf("Drone fora da regiao de pouso autorizado!!!\n");
	}
	
	return 0;
}