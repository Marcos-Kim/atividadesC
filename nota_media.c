#include <stdio.h>

int main(){

    float nota1, nota2, nota3, nota4, media;
    printf ("Qual a primeira nota?\n");
    scanf ("%f" , &nota1);

    printf ("Qual a segunda nota?\n");
    scanf ("%f" , &nota2);

    printf ("Qual a terceira nota?\n");
    scanf ("%f" , &nota3);

    printf ("Qual a quarta nota?\n");
    scanf ("%f" , &nota4);

    media = (nota1 + nota2 + nota3 + nota4) /4;

    if (media >= 6){
        printf("Aprovado(a)");
    }
    else{
        printf("Reprovado(a)");
    }
    return 0;
}