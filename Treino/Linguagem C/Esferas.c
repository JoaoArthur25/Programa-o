#include <stdio.h>
#include <math.h>

int main() {
    float xCentro1, yCentro1, zCentro1, raio1;
    float xCentro2, yCentro2, zCentro2, raio2;

    printf("Digite o valor do raio da primeira esfera:\n");
    scanf("%f", &raio1);
    printf("Digite o valor do x do centro da primeira esfera:\n");
    scanf("%f", &xCentro1);
    printf("Digite o valor do y do centro da primeira esfera:\n");
    scanf("%f", &yCentro1);
    printf("Digite o valor do z do centro da primeira esfera:\n");
    scanf("%f", &zCentro1);

    printf("Digite o valor do raio da segunda esfera:\n");
    scanf("%f", &raio2);
    printf("Digite o valor do x do centro da segunda esfera:\n");
    scanf("%f", &xCentro2);
    printf("Digite o valor do y do centro da segunda esfera:\n");
    scanf("%f", &yCentro2);
    printf("Digite o valor do z do centro da segunda esfera:\n");
    scanf("%f", &zCentro2);

    float distanciaCentros = sqrt(pow(xCentro2 - xCentro1, 2) + pow(yCentro2 - yCentro1, 2) + pow(zCentro2 - zCentro1, 2));

    if (distanciaCentros <= raio1 + raio2) {
        printf("As esferas estao colidindo!\n");
    } else {
        printf("As esferas nao estao colidindo.\n");
    }

    return 0;
}
