#include <stdio.h>

int main () {
//double N;
int N,n100,n50,n20,n10,n5,n2,m1,m50,m25,m10,m5,m01;
scanf("%d", &N);
n100 = N/100;
n50 = N % 100 / 50;
n20 = N %100 %50 / 20;
n10 = N %100 %50 %20 / 10;
n5 = N %100 %50 %20 %10 / 5;
n2 = N %100 %50 %20 %10 %5 / 2;

 m1 = N %100 %50 %20 %10 %5 %2 /1;
m50 = N %100 %50 %20 %10 %5 %2 %1 / 0.5;
m25 = N %100 %50 %20 %10 %5 %2 %1 %0.5 / 0.25;
m10 = N %100 %50 %20 %10 %5 %2 %1 %0.5 %0.25 / 0.10;
m5 = N %100 %50 %20 %10 %5 %2 %1 %0.5 %0.25 %0.10 / 0.05;
m01 = N %100 %50 %20 %10 %5 %2 %1 %0.5 %0.25 %0.10 %0.05 / 0.01;

 printf("%d nota(s) de R$ 100,00\n", n100);
printf("%d nota(s) de R$ 50,00\n", n50);
printf("%d nota(s) de R$ 20,00\n", n20);
printf("%d nota(s) de R$ 10,00\n", n10);
printf("%d nota(s) de R$ 5,00\n", n5);
printf("%d nota(s) de R$ 2,00\n", n2);

 printf("%d moeda(s) de R$ 1.00\n", m1);
printf("%d moeda(s) de R$ 0.50\n", m50);

}