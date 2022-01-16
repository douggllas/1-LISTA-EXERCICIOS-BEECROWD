    #include <stdio.h>
    #include <math.h>

    int main (){
        //* Equação (4/3) * pi * R3*/

        double valorDePi=3.14159, raio;
        
        scanf ("%lf", &raio);
        double volumeEsfera=(4/3.0)*valorDePi*pow(raio,3);

        printf ("VOLUME = %.3lf\n", volumeEsfera);
        
        return 0;
        

    }
