#include <stdio.h>
int man (){
    int a,h,m,s;

    scanf ("%i", &a);

    h = a/3600;
    a -= h * 3600;
    m = a / 60;
    s -= m* 60;

    printf ("%i:%i:%i:\n",h,m,a);

    return 0;
}
