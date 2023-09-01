#include <stdio.h>
void hexadecimal_ASCII ( char caracter) {
    printf ("O seu codigo hexadecimal e 0x%02X\n", caracter, caracter);
}

int decimal_ASCII (char caracter){
    return (int)caracter;
} 

int main () {
    char caracter;
    int cod_decimal = decimal_ASCII;
    printf ("Qual caracter voce deseja converter:");
    scanf ("%c", &caracter);
    printf ("O seu codigo decimal e %d\n", caracter, cod_decimal);
    hexadecimal_ASCII(caracter);
    return 0;
}