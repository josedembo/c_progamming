#include <stdio.h>

/* Encontrar o maior número ímpar da lista L*/

int main(int argc, char const *argv[])
{
    int L[] = {-77, 42, -21, 14, 28, -57, -19, 32, 46, 6, 12};
    int aux, M_impar, count, i, tamanho;

    // M_impar = 1;
    tamanho = sizeof(L) / sizeof(L[0]);

    for (i = 0; i < tamanho; i++){
        if(L[i] % 2 != 0){

            if (i == 0) {
                M_impar = L[i];
                continue;
            }

            if (L[i] > M_impar){
                M_impar = L[i];
            }
        }
    }

    printf("Maior numero impar: %d\n", M_impar);
    printf("tmanho do tipo int: %ld bytes \n", sizeof(int));

    return 0;
}
