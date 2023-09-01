#include <stdio.h>

int main () {
    int fahrenheit;
    int celsius;
    printf ("Qual a temperatura em Fahrenheits ?");
    scanf ("%d", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf (" %d Graus Fahrenheit sao %d Graus Celsius", fahrenheit, celsius);
    return 0;
}