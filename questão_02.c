#include <stdio.h>

int main () {
    float distancia;
    float gasolina;
    float consumo_medio;
    printf ("Informe a distancia viajada(em Km):");
    scanf ("%f", &distancia);
    printf ("Infome a quantidade de gasolina gasta (em litros):");
    scanf ("%f", &gasolina);
    consumo_medio = distancia/gasolina;
    printf ("Seu consumo medio foi de: %.2f Km/l", consumo_medio);
    return 0;
}