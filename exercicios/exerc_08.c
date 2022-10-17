#include <stdio.h>

int main(int argc, char const *argv[])
{
    int L[] = {9, 42, 21, 14, 25, 3, 19, 33, 45, 6};
    int valor_1, valor_2, i,j, diferenca, dif, tamanho;
    // diferenca = 10000;
    tamanho = sizeof(L) / sizeof(L[0]);

    for(i = 0; i < tamanho; i++){
       for(j = 0; j < tamanho; j++){
        dif = (L[i] - L[j]);
        if(dif < 0) dif *= -1;
        if (i == 0 && j == 1) diferenca = dif;
        // printf("%d ", dif);
            if(dif < diferenca && dif != 0){
                diferenca = dif;
                valor_1 = L[i];
                valor_2 = L[j];
                
            }
       } 
    }
    printf("os dois elementos mais proximos sao: %d e %d", valor_1, valor_2);
    return 0;
}
