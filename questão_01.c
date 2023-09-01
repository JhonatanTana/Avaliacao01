#include <stdio.h>

int main () {
    float primeira_nota;
    float segunda_nota;
    float media;
    printf ("Informe a primeira nota:");
    scanf ("%f", &primeira_nota);
    printf ("Informe a segunda nota:");
    scanf ("%f", &segunda_nota);
    media= primeira_nota + segunda_nota / 2;
    printf ("A soma da sua nota e: %.2lf", media);
    return 0;
}