#include <stdio.h>

// Encontrar o terceiro maior elemento da lista

int main(int argc, char const *argv[])
{
    int L[] = {-9, 2, -21, 14, 42, -3, 11, 18, 33, 46, 6};
    int M1, M2, M3, i, aux, tamanho;
    int M = 0;

    tamanho = sizeof(L) / sizeof(L[0]);

    if(L[0] > L[1]){
        M1 = L[0];
        M2 = L[1];
    }else{
        M1 = L[1];
        M2 = L[0];
    }

    for (i = 2; i < tamanho ; i++){
        if(L[i] > M1){
            M2 = M1;
            M1 = L[i];
        }else if(L[i] > M2){
            M2 = L[i];
        }
    }

    printf("\no mair e: %d\n", M1);
    printf("O segundo maior he: %d\n", M2);
    return 0;
}
