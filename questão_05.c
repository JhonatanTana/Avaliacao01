#include <stdio.h>
#include <math.h>

int main () {
    double primeiro_cateto, segundo_cateto, hipotenusa;
    printf ("Informe a medida do primiero cateto:\n");
    scanf ("%lf", &primeiro_cateto);
    printf ("Informe a medida do segundo cateto\n");
    scanf ("%lf", &segundo_cateto);
    hipotenusa = sqrt(primeiro_cateto * primeiro_cateto + segundo_cateto * segundo_cateto);
    printf ("A medida da hipotenusa e igual a: %.2lf\n", hipotenusa);
    return 0;
}