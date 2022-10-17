#include <stdio.h>

int main(int argc, char const *argv[])
{
    int L[] = {9, 42, 21, 14, 25, 3, 19, 33, 45, 6};
    int conta_invers, i,j, dobro, tamanho;

    tamanho = sizeof(L) / sizeof(L[0]);
    conta_invers = 0;

    for(i = 0; i < tamanho; i++){
       for(j = 0; j < tamanho; j++){
            if(i < j && L[i] > L[j]){
                conta_invers += 1;
            }
       } 
    }
    printf("Total de inversoes: %d", conta_invers);
    // saida: 21 
    return 0;
}
