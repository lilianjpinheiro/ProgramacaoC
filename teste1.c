#include <stdio.h>

int main (){
//Estrutura de Loops aninhados
    int i = 1;
    while (i <= 10) { //Loop externo
        int j = 1; //Variável Local
        while (j <= 10){ // Loop interno
            printf("%d\t", i * j);
            j++; //Incremento loop interno
        }
    printf("\n");
    i++; //Incremento Loop externo
    }
    return 0;
}