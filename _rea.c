#include <stdio.h>
#include <math.h>

int main () {
    double ladoA;
    double ladoB;
    double ladoC;
     
    scanf ("%lf %lf %lf",&ladoA,&ladoB,&ladoC);

    printf ("TRIANGULO: %.3lf\n", (ladoA*ladoC)/2);
    printf ("CIRCULO: %.3lf\n", 3.14159*pow(ladoC,2));
    printf ("TRAPEZIO: %.3lf\n", ((ladoA+ladoB)*ladoC)/2);
    printf ("QUADRADO: %.3lf\n", pow(ladoB,2));
    printf ("RETANGULO: %.3lf\n", (ladoA*ladoB));
    return 0;
}