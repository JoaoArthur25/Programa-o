#include <stdio.h>
#include <math.h>

int main ()
{
	float sen,cos,tan,secante,cossecante,cotangente;
	float anguloGraus,anguloRadianos;
	
	printf("Digite o valor do angulo:\n");
	scanf("%f",&anguloGraus);
	
	anguloRadianos = anguloGraus * M_PI/180.0f;
	
	sen = sinf(anguloRadianos);
	cos = cosf(anguloRadianos);
	tan = tanf(anguloRadianos);
	secante = 1.0f/sen;
	cossecante = 1.0f/cos;
	cotangente = 1.0f/tan;
	
	printf("Seno: %.2f\n", sen);
    printf("Cosseno: %.2f\n", cos);
    printf("Tangente: %.2f\n", tan);
    printf("Secante: %.2f\n", secante);
    printf("Cossecante: %.2f\n", cossecante);
    printf("Cotangente: %.2f\n", cotangente);
    
    return 0;
}