#include <stdio.h>
#include <math.h>
 
int main ()
{

float a,b,c,delta,raiz1,raiz2;

printf("Digite o valor de A: ");
scanf("%f",&a);
printf("Digite o valor de B: ");
scanf("%f",&b);
printf("Digite o valor de C: ");
scanf("%f",&c);

delta= pow(b, 2) - 4*a*c;

if (delta > 0)
{
    raiz1 = (-b) +sqrt(delta)/2*a;
    raiz2 = (-b) -sqrt(delta)/2*a;

    printf("Raiz 1: %.2f \n", raiz1);
    printf("Raiz 2: %.2f \n", raiz2);
}
else if(delta == 0)
{

raiz1 = (-b)/(2*a);
printf("Raiz1: %.2f \n", raiz1);
}
else 
{
    printf("Nao existem raizes reais");
}
return 0;

}