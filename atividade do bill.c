#include <stdio.h>
#include <math.h>

#define pi 3.14

float areaCircunferencia(float raio) {
    return pi * raio * raio;
}


float areaQuadrado(float lado) {
    return lado * lado;
}


float areaRetangulo(float largura, float altura) {
    return largura * altura;
}


float volumeCubo(float lado) {
    return lado * lado * lado;
}


float volumeEsfera(float raio) {
    return (4.0f / 3.0f) * pi * raio * raio * raio;
}

int main() {
    float raio, lado_quadrado, largura_retangulo, altura_retangulo, lado_cubo, raio_esfera;

    printf("Digite o raio da circunferência: ");
    scanf("%f", &raio);
    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado_quadrado);
    printf("Digite a largura do retângulo: ");
    scanf("%f", &largura_retangulo);
    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura_retangulo);
    printf("Digite o lado do cubo: ");
    scanf("%f", &lado_cubo);
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio_esfera);

    float area_circ = areaCircunferencia(raio);
    float area_quad = areaQuadrado(lado_quadrado);
    float area_ret = areaRetangulo(largura_retangulo, altura_retangulo);
    float vol_cubo = volumeCubo(lado_cubo);
    float vol_esfera = volumeEsfera(raio_esfera);

    printf("Área da circunferência: %.2f\n", area_circ);
    printf("Área do quadrado: %.2f\n", area_quad);
    printf("Área do retângulo: %.2f\n", area_ret);
    printf("Volume do cubo: %.2f\n", vol_cubo);
    printf("Volume da esfera: %.2f\n", vol_esfera);

    return 0;
}
