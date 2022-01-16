#include <stdio.h>
int main (){
    int N, hORAS, hORASsEGUNDOS, mINUTOS, sEGUNDOS;
    hORASsEGUNDOS= 3600;

    scanf ("%d", &N);

    printf ("%d:", N/3600);
           mINUTOS= N%3600;
    printf ("%d:", mINUTOS/60);
            sEGUNDOS=N%60;
    printf ("%d\n", sEGUNDOS); 
    return 0;    
}
