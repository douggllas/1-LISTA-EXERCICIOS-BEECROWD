#include <stdio.h>
int main ()
{
int idadeEmDias, Anos, Meses, Dias;

scanf ("%d", &idadeEmDias);

Anos=(idadeEmDias/365);
Meses=(idadeEmDias%365)*30;
Dias=(idadeEmDias%365%30);

printf ("%d ano(s)\n %d mes(es)\n%d dia(s)\n", Anos,Meses,Dias);
return 0;
}
