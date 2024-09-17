#include <stdio.h>

int main(){
    
    int contador;
    int nota;
    int total;
    int média;

    total = 0;
    contador = 1;

    while (contador <= 10) {
    printf("Digite a nota:   \n");
    scanf("%d", &nota);
    total = total + nota;
    contador = contador + 1;
    }

    média = total / 10;

    printf("Média da turma é %d\n", média); 
    return 0; 
}