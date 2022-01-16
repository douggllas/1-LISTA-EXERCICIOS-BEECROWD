#include <stdio.h>
int main ()
{
    int tempoViagem, velocidadeMedia;
    double consumo;
    
    scanf ("%d %d", &tempoViagem, &velocidadeMedia);
    consumo = ((tempoViagem*velocidadeMedia)/12.0);
    
    printf ("%.3lf\n", consumo);
    return 0;

}
