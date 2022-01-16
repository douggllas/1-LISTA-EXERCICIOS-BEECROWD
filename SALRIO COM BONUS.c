    #include <stdio.h>
    int main() {
    char nomeDoVendedor;
    double salarioFixo, totalDeVendas;
    scanf ("%s", nomeDoVendedor);
    scanf ("%lf %lf", &salarioFixo,&totalDeVendas);
    printf ("TOTAL = R$ %.2f\n", (salarioFixo+totalDeVendas*0,15));

    return 0;
    }
