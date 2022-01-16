#include <stdio.h>
#include <math.h>

int main () {
    int valor,troco, troco100, troco50, troco20, troco10, troco5, troco2, troco1;

    scanf ("%d", &valor);

    troco=valor;
    troco100=troco/100;
    troco=troco - (troco100*100);

    troco50= troco/50;
    troco= troco - (troco50*50);

    troco20=troco/20;
    troco=troco-(troco20*20);

    troco10=troco/10;
    troco=troco-(troco10*10);

    troco5=troco/5;
    troco5=troco-(troco5*5);

    troco2=troco/2;
    troco=troco-(troco2*2);

    troco1=troco/1;
    troco=troco-(troco1*1);


    printf ("%d\n", valor);
    printf ("%d notas(s) de R$ 100,00\n", troco100);
    printf ("%d notas(s) de R$ 50,00\n", troco50);
    printf ("%d nota(s) de R$ 20,00\n", troco20);
    printf ("%d nota(s) de R$ 10,00\n", troco10);
    printf ("%d nota(s) de R$ 5,00\n", troco5);
    printf ("%d nota(s) de R$ 2,00\n", troco2);
    printf ("%d nota(s) de R$ 1,00\n", troco1);
    
        return 0;
}