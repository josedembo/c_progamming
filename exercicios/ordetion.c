#include <stdio.h>

// Encontrar o terceiro maior elemento da lista

int main(int argc, char const *argv[])
{
    int L[] = {-9, 42, -21, 14, 28, -3, 11, 18, 32, 46, 6};
    int maior, i, aux, tamanho;

    tamanho = sizeof(L) / sizeof(L[0]);

    printf("Lista desordenada:");
    for(i = 0; i < tamanho; i++){
        printf("%d ", L[i]);
    }

    for (i = 0; i < tamanho - 1; i++){
        if(L[i +1] > L[i]){
            aux = L[i+1];
            L[i+1] = L[i];
            L[i] = aux;
        }
    }

    printf("\nLista ordenada:");
    for(i = 0; i < tamanho; i++){
        printf("%d ", L[i]);
    }

    return 0;
}