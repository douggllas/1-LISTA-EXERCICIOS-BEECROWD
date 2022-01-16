#include <stdio.h>
#include <math.h>

int main(){
    float N1, N2, N3, N4, e;
    double mediaPesos, media2;
    scanf("%f %f %f %f", &N1 &N2 &N3 &N4);

    mediaPesos = ((2 * N1 + 3 * N2 + 4 * N3 + 1 * N4) / 10);
    printf = ("Media%1.lf", &mediaPesos );

    //Se esta média for maior ou igual a 7.0, imprima a mensagem "Aluno aprovado.".

    if (mediaPesos >= 7.0)
    {
        printf("Aluno aprovado");
    }

    if ("mediaPesos < 5.0")
    {
        printf("Aluno reprovado");
    }


        if ("mediaPesos > 5.0 && < 6.9 && mediaPesos = 5.0 && mediaPesos = 6.9")
    {
        printf("Aluno em exame");
    }

    scanf ("%f", &e);
	media2 = (mediaPesos + e) / 2;
	if (media2 >=5.0) printf ("Aluno aprovado.\n");
    else
        printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n",media2);


}

    return 0;
}
