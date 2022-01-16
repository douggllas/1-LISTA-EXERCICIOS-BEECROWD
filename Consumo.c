#include <stdio.h>

int main () {
    float distanciaPercorrida;
    float consumo;

    scanf ("%ls %ls\n", &distanciaPercorrida,&consumo );
     
    printf("%.3f km/l\n",distanciaPercorrida/consumo);

    return 0;
}
