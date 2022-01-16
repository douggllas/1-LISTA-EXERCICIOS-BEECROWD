#include <stdio.h>

int main (){
    int valorA, valorB, valorC, maiorEntre;

    scanf ("%d %d%d", &valorA, &valorB, &valorC);
    maiorEntre= (valorA+valorB+ abs (valorA-valorB))/2;
    maiorEntre= (valorC+maiorEntre+ abs (maiorEntre-valorC))/2;

    printf ("%d eh o maior\n", maiorEntre);
    return 0;

}